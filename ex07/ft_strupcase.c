#include <stdio.h>

char *ft_strupcase(char *str)
{
    int a;
    a = 0;
    while (str[a]!='\0')
    {
        str[a]=str[a]-32;
        a++;
    }
    return (str);
}
/*
int main()
{
    char stc[]="reemplazando";
    ft_strupcase(stc);
    printf("%s",stc);
    return 0;
}
*/