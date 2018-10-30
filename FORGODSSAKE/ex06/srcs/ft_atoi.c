/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 13:55:13 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/30 20:00:29 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		negative;
	int		result;

	i = 0;
	negative = 0;
	result = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13) || (str[i] == '+'))
		i++;
	if (str[i] == '-')
	{
		negative++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if (negative > 0 && i > 0)
		return (-result);
	if (negative == 0 && i > 0)
		return (result);
	return (0);
}
