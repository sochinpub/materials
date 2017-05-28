/*
int isascii(int c);

检查参数c 是否为ASCII 码字符，也就是判断c 的范围是否在0 到
127之间。

若参数c 为ASCII 码字符，则返回TRUE，否则返回NULL（ 0 ）。

此为宏定义，非真正函数。
*/

#include <ctype.h>
#include <stdio.h>

void main()
{
    int i;
    for(i = 125; i<130; i++)
    {
        if(isascii(i))
            printf("%d is an ascii character: %c\n", i, i);
        else
            printf("%d is not an ascii character\n", i);
    }
}
