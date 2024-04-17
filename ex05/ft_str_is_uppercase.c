#include <stdio.h>

int  ft_str_is_uppercase(char *str)
{
    int a;
    a = 0;
    while (str[a] != '\0')
    {
        if (str[a]>='A' && str[a]<='Z')
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
    int may;
    char uc[] = "PROGRAMACIÓN";
    may = ft_str_is_uppercase(uc);
    printf("%i",may);
    return 0;
}
*/