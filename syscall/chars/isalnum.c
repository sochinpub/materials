/*
int isalnum(int c);

检查参数c 是否为英文字母或阿拉伯数字，在标准c 中相当于使用
（isalpha( c )|| isdigit( c )）做测试。

若参数c 为字母或数字，则返回TRUE，否则返回NULL( 0 )。
此为宏定义，非真正函数。
*/

#include <ctype.h>
#include <stdio.h>

void main()
{
    char str[] = "123c@#FDsP[e?";
    int i;
    for (i = 0; str[i] != 0; i++)
        if(isalnum(str[i]))
            printf("%c is an alphanumeric charachter\n", str[i]);
}
