#include "ft_strcpy.c"
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

void ft_putchar(char  c)
{
	write(1, &c, 1);
}

void put_str(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}


int		main()
{
	char source[] = "Here's some text";
	char destination[] = "New stuff";
	put_str(source);
	put_str(destination);
	put_str(ft_strcpy(destination, source));
	put_str(source);
	put_str(destination);
	return(0);
}
