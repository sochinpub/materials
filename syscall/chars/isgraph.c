/*
int isgraph(int c);

检查参数c 是否为可打印字符，若c所对映的ASCII 码可打印，且
非空格字符则返回TRUE。

函数的作用是判断一个字符是否是可打印字符（ascii码33-126之间的字符），isprint()函数功能和isgraph()函数类似，
区别是isprint()函数包含空格在内（ascii码32-126之间的字符）

若参数c 为可打印字符，则返回TRUE，否则返回NULL（0）。

此为宏定义，非真正函数

*/

#include <ctype.h>
#include <stdio.h>

void main()
{
    char str[] = "a5 @;";
    int i;
    for(i = 0; str[i] != 0; i++)
        if(isgraph(str[i]))
            printf("str[%d] is printable character: %c\n", i, str[i]);
}
