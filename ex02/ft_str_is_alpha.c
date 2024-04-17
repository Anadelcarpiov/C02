#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;
	a = 0;
	while (str[a]!= '\0')
	{
		if ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z'))
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
	int abc;

	abc = ft_str_is_alpha("AnadelCarpio");
	printf("Contiene caracteres alfabeticos: %i\n", abc);

	abc = ft_str_is_alpha("ANADELCARPIO");
	printf("Contiene caracteres alfabeticos: %i\n", abc);

	abc = ft_str_is_alpha("D449867ds");
	printf("Contiene mixtura de caracteres: %i\n", abc);

	abc = ft_str_is_alpha("##");
	printf("Contiene otros caracteres: %i\n", abc);

	return(0);
}
*/