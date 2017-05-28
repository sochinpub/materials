
/*
int ispunct(int c);

检查参数c是否为标点符号或特殊符号。返回TRUE 也就是代表参
数c为非空格、非数字和非英文字母。

若参数c 为标点符号或特殊符号，则返回TRUE，否则返回NULL
（0）。

此为宏定义，非真正函数

*/

#include <stdio.h>
#include <ctype.h>

void main()
{
    char str[] = "123c@#FDsP[3?";
    int i;
    for(i = 0; str[i] != 0; i++)
        if(ispunct(str[i]))
            printf("%c\nis punct character\n", str[i]);
}
