
/*
size_t getpagesize(void);

返回一分页的大小，单位为字节（byte）。此为系统的分页大小，不
一定会和硬件分页大小相同。

内存分页大小。

在Intel x86 上其返回值应为4096bytes。

*/

#include <unistd.h>
#include <stdio.h>

main()
{
    printf("page size = %ld\n", getpagesize());
}
