#include <stdio.h>
#include "ft_atoi.c"
#include <stdlib.h>

int		ft_atoi(char *str);

int		main()
{
	while(1)
	{
		char str[100];
		scanf("%s", str);
		printf("atoi  -   %d\n", atoi(str));
		printf("ft_atoi - %d\n", ft_atoi(str));
	}
	return(0);
}
