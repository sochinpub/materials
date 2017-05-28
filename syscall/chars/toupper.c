
/*
int toupper(int c);

若参数c 为小写字母则将该对映的大写字母返回。

返回转换后的大写字母，若不须转换则将参数c值返回。

*/

#include <stdio.h>
main()
{
    char s[] = "aBcDeFgH12345;!#%";
    int i;
    printf("before toupper(): %s\n", s);
    for(i = 0; i < sizeof(s); i++)
        s[i] = toupper(s[i]);

    printf("after toupper(): %s\n", s);
}
