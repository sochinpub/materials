
/*
malloc，free，realloc，brk

 
void *calloc(size_t nmemb, size_t size);

calloc()用来配置nmemb 个相邻的内存单位，每一单位的大小为
size，并返回指向第一个元素的指针。这和使用下列的方式效果相
同：malloc(nmemb* size);不过，在利用calloc()配置内存时会将内存
内容初始化为0。

若配置成功则返回一指针，失败则返回NULL。
*/

#include <stdlib.h>

struct test {
    int a[10];
    char b[20];
}

main()
{
    struct test *ptr = calloc(sizeof(struct test), 10);
}
