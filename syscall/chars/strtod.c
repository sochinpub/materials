
/*
atoi，atol，strtod，strtol，strtoul

double strtod(const char *nptr, char **endptr);

strtod()会扫描参数nptr字符串，跳过前面的空格字符，直到遇上数
字或正负符号才开始做转换，直到出现非数字或字符串结束时
（’\0’）才结束转换，并将结果返回。若endptr 不为NULL，则会
将遇到不合条件而终止的nptr中的字符指针由endptr 传回。参数
nptr 字符串可包含正负号、小数点或E(e)来表示指数部分。如
123.456或123e-2。

返回转换后的浮点型数。
*/

#include <stdlib.h>
#include <stdio.h>

main()
{
    char a[] = "100000000000";
    char b[] = "20000000000";
    char c[] = "fff";

    printf("a = %f\n", strtod(a, NULL));
    printf("b = %f\n", strtod(b, NULL));
    printf("c = %f\n", strtod(c, NULL));
}
