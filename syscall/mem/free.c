
/*
malloc，calloc，realloc，brk

void free(void *ptr);

参数ptr为指向先前由malloc（）、calloc()或realloc()所返回的内存
指针。调用free()后ptr 所指的内存空间便会被收回。假若参数ptr
所指的内存空间已被收回或是未知的内存地址，则调用free()可能
会有无法预期的情况发生。若参数ptr为NULL，则free()不会有任
何作用。

*/


