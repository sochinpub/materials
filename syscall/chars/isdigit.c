
/*
int isdigit(int c);

检查参数c是否为阿拉伯数字0 到9。

若参数c 为阿拉伯数字，则返回TRUE，否则返回NULL（0）。

此为宏定义，非真正函数。

*/

#include <ctype.h>
#include <stdio.h>

void main()
{
    char str[] = "123@#FDsP[e?";
    int i;
    for(i = 0; str[i] != 0; i++)
        if (isdigit(str[i]))
            printf("%c is an digit charachter\n", str[i]);

}
