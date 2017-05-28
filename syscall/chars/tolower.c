

/*
 
int tolower(int c);

若参数c 为大写字母则将该对应的小写字母返回。

返回转换后的小写字母，若不须转换则将参数c值返回。

*/

#include <stdio.h>

main()
{
    char s[] = "aBcDeFgH12345;!#$";
    int i;
    printf("before tolower(): %s\n", s);
    for(i = 0; i < sizeof(s); i++)
        s[i] = tolower(s[i]);
        printf("after tolower(): %s\n", s);
}
