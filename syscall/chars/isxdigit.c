
/*
int isxdigit(int c);

检查参数c是否为16 进制数字，只要c为下列其中一个情况则返回
TRUE。16进制数字：0123456789ABCDEF

若参数c 为16进制数字，则返回TRUE，否则返回NULL（0）

此为宏定义，非真正函数。
*/

#include <ctype.h>
#include <stdio.h>

void main()
{
    char str[] = "123c@#FDsP[e?";
    int i;
    for(i = 0; str[i] != 0; i++)
        if(isxdigit(str[i]))
            printf("%c is a hexadecimal digits\n", str[i]);
}
