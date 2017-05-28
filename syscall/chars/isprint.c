
/*
int isprint(int c);

检查参数c 是否为可打印字符，若c所对映的ASCII 码可打印，且
非空格字符则返回TRUE。

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
        if(isprint(str[i]))
            printf("str[%d] is printable character: %c\n", i, str[i]);
}
