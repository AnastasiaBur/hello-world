/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:44:42 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/23 18:03:23 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		j = i - 1;
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (i == 0 || str[j] < '0')
				str[i] = str[i] - 32;
			if (str[j] > '9' && str[j] < 'A')
				str[i] = str[i] - 32;
			if (str[j] > 'Z' && str[j] < 'a')
				str[i] = str[i] - 32;
			if (str[j] > 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
