#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
  int a=0;
  while (src[a] != '\0')
  {
    dest[a] = src[a];
    a++;
  }
  dest[a] = '\0';
  return (dest);
/* 
}
 int main()
 {
  char dest[] = " "; 
  ft_strcpy(dest,"Piscina C02");
  printf("%s",dest);
  return 0;
 }
*/ 