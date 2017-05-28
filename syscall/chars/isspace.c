/*
int isspace(int c);

检查参数c是否为空格字符，也就是判断是否为空格（’’）、定位字
符（’\t’）、CR（’\r’）、换行（’\n’）、垂直定位字符（’\v’）或翻页（’\f’）
的情况。

若参数c 为空格字符，则返回TRUE，否则返回NULL（0）。

此为宏定义，非真正函数
*/

#include <ctype.h>
#include <stdio.h>

void main()
{
    char str[] = "123c@\n#FD\tsP[3?\r";
    int i;
    for(i = 0; str[i] != 0; i++)
        if(isspace(str[i]))
            printf("str[%d] is a white-space character: %d\n", i, str[i]);
}
