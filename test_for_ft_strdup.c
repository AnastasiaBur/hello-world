/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:01:09 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/24 15:38:23 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	ft_putstr(char *str);

int		main(void)
{
	char	*src;
	char	*dest;

	src = "Hello my dear!";
	dest = strdup(src);
	ft_putstr(src);
	ft_putstr("\n");
	ft_putstr(dest);
	ft_putstr("\n");
	return (0);
}
