/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:55:33 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/23 18:05:44 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A')
			return (0);
		if (str[i] > 'Z' && str[i] < 'a')
			return (0);
		if (str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
