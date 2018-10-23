#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void replace_first_h_with_y(char *str)
{
	str[0] = 'Y';
}

void replace_first_char(char *str, char *dest)
{
	dest[0] = str[0];
}

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "yello";

	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	replace_first_char(str1, str2);
	ft_putstr(str1);
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putchar('\n');
	return (0);
}
