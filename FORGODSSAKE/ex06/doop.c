/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:23:45 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/30 21:18:56 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "headers.h"

int		do_op(char *op[5], char **argv)
{
	int		(*f[5]) (int x, int y);
	int		i;

	f[0] = sum;
	f[1] = sub;
	f[2] = mul;
	f[3] = div;
	f[4] = mod;
	i = 0;
	while (i < 5)
	{
		if (ft_strncmp(op[i], argv[3], 1) == 0)
			return (*f[i])(ft_atoi(argv[2]), ft_atoi(argv[4]));
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*op[5];
	int		res;
	int		i;

	i = 0;
	res = 0;
	*op = {"+", "-", "*", "/", "%"};
	if (argc == 4)
	{
		if (*argv[2] < '0' || *argv[2] > '9')
			write(1, "0", 1);
		while (i < 5)
		{
			if (ft_strncmp(argv[3], op[i], 1) == 0)
				res++;
			i++;
		}
		if (res == 0)
			write(1, "0", 1);
		else if (*argv[4] < '0' || *argv[4] > '9')
			write(1, "0", 1);
		else
			ft_putnbr(do_op(op, argv));
	}
	return (0);
}
