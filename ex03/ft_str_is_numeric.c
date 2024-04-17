#include <stdio.h>

 int ft_str_is_numeric(char *str)
{
	int	n;
	n = 0;
	while (str[n]!= '\0')
	{
		if (str[n] >= '0' && str[n] <= '9') 
		{
			n++;
		}
        else
		return 0;
	}
	return 1;	
}
/*
int main()
{
	int num;
    char nros[]="22976";
	num = ft_str_is_numeric(nros);
	printf("%i\n", num);
	return(0);
}
*/