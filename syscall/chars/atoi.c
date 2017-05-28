/*
int atoi(const char *nptr);

atoi()会扫描参数nptr字符串，跳过前面的空格字符，直到遇上数字
或正负符号才开始做转换，而再遇到非数字或字符串结束时（’\0’）
才结束转换，并将结果返回。

返回转换后的整型数。

atoi()与使用strtol(nptr，（char**）NULL，10)；结果相同。
*/

#include <stdlib.h>
#include <stdio.h>

main()
{
    char a[] = "-100";
    char b[] = "456";
    int c;
    c = atoi(a) + atoi(b);
    printf("c=%d\n", c);
}
