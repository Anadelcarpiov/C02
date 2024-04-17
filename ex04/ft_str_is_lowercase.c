#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int a;
    a = 0;
    while (str[a]!='\0')
    {
        if (str[a]>='a' && str[a]<='z')
        {
            a++;
        }
        else
        return 0;  
    }
    return 1;
}
/*
int main()
{
    int min;
    char lc[]="reemplazando";
    min=ft_str_is_lowercase(lc);
    printf("%i", min);
    return 0;
}
*/