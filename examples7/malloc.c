/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:08:12 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/24 14:23:52 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define LEN		21

void	ft_putstr(char *str);

int		main(void)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	ft_putstr("\n");
	free(str);
	return (0);
}
