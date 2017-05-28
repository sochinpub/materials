
/*
 *
int toascii(int c);

toascii（）会将参数c 转换成7 位的unsigned char 值，第八位则会
被清除，此字符即会被转成ASCII 码字符。

将转换成功的ASCII 码字符值返回。

*/

#include <stdlib.h>
#include <stdio.h>
main()
{
    int a = 217;
    char b;
    printf("before toascii(): a value = %d(%c)\n", a, a);
    b = toascii(a);
    printf("after toascii(): a value = %d(%c)\n", a ,a);
    printf("b = %c\n", b);

}
