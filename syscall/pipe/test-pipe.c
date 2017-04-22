#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>

void *thread_run(void *data)
{
    int ret;
    int *fd = (int*) data;
    char c = 'a';

    ret = write(*fd, &c, sizeof(c));
    g_assert(ret == 1);
    return NULL;
}


int main()
{
    int fd[2];
    pthread_t thread;
    pthread_attr_t attr;
    int err, ret;
        
    ret = pipe(fd);
    err = pthread_attr_init(&attr);
    if (err) {
        printf("init thread attr failed\n");
    }
    err = pthread_create(&thread, &attr, thread_run, &fd[1]);
    if (err) {
        printf("create thread failed\n");
    }
    pthread_attr_destroy(&attr);

    /**/
    char c;
    ret = read(fd[0], &c, sizeof(c));
    g_assert(ret == 1);
    printf("c=%c\n", c);

    void *rt;
    pthread_join(thread, &rt);
    return 0;
}
