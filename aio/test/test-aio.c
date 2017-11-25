
//#define _GNU_SOURCE
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <libaio.h>

int main()
{
     io_context_t ctx; // io_context *
     unsigned nr_events = 10;
     memset(&ctx, 0, sizeof(ctx));
     int errcode = io_setup(nr_events, &ctx);
     if (errcode == 0) {
         printf("io_setup success\n");
     }
     else {
         printf("io_setup error: %d: %s\n", errcode, strerror(-errcode));
         goto ret;
     }

     int fd = open("./aio.txt", O_CREAT | O_DIRECT | O_WRONLY, S_IRWXU | S_IRWXG | S_IROTH);
     printf("open: %s\n", strerror(errno));
     if (errno)
         goto out2;

     char *buf;
     errcode = posix_memalign((void **)&buf, sysconf(_SC_PAGESIZE), sysconf(_SC_PAGESIZE));
     printf("posix_memalign: %s\n", strerror(errcode));
     if (errcode)
         goto out1;

     strcpy(buf, "hello aio\n");

     struct iocb *iocbp = (struct iocb *)malloc(sizeof(struct iocb));
     memset(iocbp, 0, sizeof(struct iocb));

     iocbp[0].data = buf;
     iocbp[0].aio_lio_opcode = IO_CMD_PWRITE;
     iocbp[0].aio_reqprio = 0;
     iocbp[0].aio_fildes = fd;

     iocbp[0].u.c.buf = buf;
     iocbp[0].u.c.nbytes = 4096;
     iocbp[0].u.c.offset = 0;

     int n = io_submit(ctx, 1, &iocbp);
     printf("io_submit: %d\n", n);

     struct io_event events[10];
     struct timespec timeo = {1, 100};
     n = io_getevents(ctx, 1, 10, events, &timeo);
     printf("io_getevents: %d\n", n);

  out1:
     close(fd);
  out2:
     io_destroy(ctx);
  ret:
     return errno;
}
