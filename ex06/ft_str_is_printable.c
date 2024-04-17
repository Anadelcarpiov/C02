#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int p;
    p = 0;
    while (str[p] != '\0')
    {
        if (str[p] >= 32 && str[p] <= 126 )
        {
            p++;
        }
        else
        return 0;
    }
return 1;    
}
/*
int main()
{
    int prin;
    char print[] = "guyt6uyi";
    prin = ft_str_is_printable(print);
    printf("%i",prin);
    return 0;

}
*/