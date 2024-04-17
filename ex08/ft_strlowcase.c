#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int a;
    a = 0;
    while(str[a]!='\0')
    {
        str[a]=str[a]+32;
        a++;
    }
return (str);
}
/*
int main()
{
    char slc[]="REEMPLAZANDO";
    ft_strlowcase(slc);
    printf("%s", slc);
    return 0;
}
*/