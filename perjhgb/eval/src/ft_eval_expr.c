/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 15:46:56 by jsanford          #+#    #+#             */
/*   Updated: 2018/11/03 17:28:26 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	eval(char *str)
{
	int				res;
	unsigned int	i;
	char			*result;

	i = 0;
	while (str[i] == ' ' || (str[i] >= '0' && str[i] <= '9'))
		i++;
	result = (char *)malloc(sizeof(str) * (i + 2));
	res = ft_atoi(ft_strncpy(result, str, i));
	return (res);
}
