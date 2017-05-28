
/*
long strtol(const char *nptr, char **endptr, int base);

strtol（）会将参数nptr字符串根据参数base来转换成长整型数。
参数base范围从2 至36，或0。参数base代表采用的进制方式，
如base值为10则采用10进制，若base值为16则采用16进制等。
当base 值为0 时则是采用10 进制做转换，但遇到如’0x’前置字符
则会使用16 进制做转换。一开始strtol（）会扫描参数nptr字符串，
跳过前面的空格字符，直到遇上数字或正负符号才开始做转换，再
遇到非数字或字符串结束时(‘\0’)结束转换，并将结果返回。若参数
endptr不为NULL，则会将遇到不合条件而终止的nptr中的字符指
针由endptr返回。

返回转换后的长整型数，否则返回ERANGE 并将错误代码存入
errno中。

ERANGE 指定的转换字符串超出合法范围。
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    char a[]="1000000000";
    char b[]="1000000000";
    char c[]="ffff";
    printf("a=%d\n",strtol(a,NULL,10));
    printf("b=%d\n",strtol(b,NULL,2));
    printf("c=%d\n",strtol(c,NULL,16));
}
