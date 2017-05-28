/*
int isalpha(int c);

检查参数c 是否为英文字母，在标准c中相当于使用（isupper（c）
||islower（c））做测试。

若参数c 为英文字母，则返回TRUE，否则返回NULL( 0 )。

此为宏定义，非真正函数

*/

#include <ctype.h>
#include <stdio.h>

void main()
{
    char str[] = "123c@#FDsP[e?";
    int i;
    for(i = 0; str[i] != 0; i++)
        if(isalpha(str[i]))
            printf("%c is an alphabet character\n", str[i]);
}
