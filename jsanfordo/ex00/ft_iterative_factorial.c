/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 13:04:31 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/20 13:29:51 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int a)
{
	int result;

	result = 1;
	if (a == 0)
		return (1);
	if (a > 0)
	{
		while (a >= 2)
		{
			result *= a;
			a--;
		}
		return (result);
	}
	else
		return (0);
}
