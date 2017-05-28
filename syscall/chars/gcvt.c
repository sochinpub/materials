
/*
ecvt，fcvt，sprintf

char *gcvt(double number, size_t ndigits, char *buf);

gcvt()用来将参数number转换成ASCII 码字符串，参数ndigits表示
显示的位数。gcvt()与ecvt()和fcvt()不同的地方在于，gcvt()所转换
后的字符串包含小数点或正负符号。若转换成功，转换后的字符串
会放在参数buf指针所指的空间。

返回一字符串指针，此地址即为buf指针。

*/

#include <stdlib.h>
#include <stdio.h>

main()
{
    double a = 123.45;
    double b = -1234.56;
    char ptr;
    int decpt, sign;
    gcvt(a, 5, ptr);
    printf("a value = %s\n", ptr);
    ptr = gcvt(b, 6, ptr);
    printf("b value=%s\n", ptr);
}
