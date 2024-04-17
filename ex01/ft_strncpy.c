#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int a = 0;
    while (src[a]!=0 && a<n)
    {
        dest[a]=src[a];
        a++;
    }
    dest[a]='\0';
    return (dest);
}
/*
int main ()
{
    char dest1[] = "";
    char src1[] = "Reemplazando";
    unsigned int b = 9;
    ft_strncpy(dest1,src1,b);
    printf("%s\n",dest1);
    return 0;
}
*/