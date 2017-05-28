
/*
atoi，atol，strtod，strtol，strtoul

double atof(const char *nptr);

atof（）会扫描参数nptr字符串，跳过前面的空格字符，直到遇上
数字或正负符号才开始做转换，而再遇到非数字或字符串结束时
（’\0’）才结束转换，并将结果返回。参数nptr字符串可包含正负
号、小数点或E（e）来表示指数部分，如123.456或123e-2。

返回转换后的浮点型数。

atof()与使用strtod（nptr,(char**)NULL）；结果相同。

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *a = "-100.23";
    char *b = "200e-2";
    float c;

    c = atof(a) + atof(b);
    printf("c= %.2f\n", c);
}
