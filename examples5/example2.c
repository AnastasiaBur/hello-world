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

int main(void)
{
	char str1[] = "Hello";

	replace_first_h_with_y(str1);
	ft_putstr(str1);
	ft_putchar('\n');
	return (0);
}
