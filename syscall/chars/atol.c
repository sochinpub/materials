/*
atof，atoi，strtod，strtol，strtoul

long atol(const char *nptr)

atol()会扫描参数nptr字符串，跳过前面的空格字符，直到遇上数字
或正负符号才开始做转换，而再遇到非数字或字符串结束时（’\0’）
才结束转换，并将结果返回。

返回转换后的长整型数。

atol()与使用strtol(nptr,(char**)NULL,10)；结果相同。
*/

#include <stdlib.h>
#include <stdio.h>

main()
{
    char a[] = "100000000";
    char b[] = "234356";

    long c;
    c = atol(a) + atol(b);
    printf("c=%d\n", c);
}


