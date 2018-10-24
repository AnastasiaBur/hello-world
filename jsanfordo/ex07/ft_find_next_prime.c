/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 17:32:27 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/20 18:28:31 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int p;

	p = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (p * p <= nb)
	{
		if (nb % p == 0)
			return (0);
		p += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int r;
	int prime;

	prime = 1;
	r = 3;
	if (nb <= 1)
		return (1);
	if (nb == 2 || nb == 3)
		return (nb);
	if (nb % 2 == 0 || nb % 3 == 0)
		prime = 0;
	while (r * r <= nb)
	{
		if (nb % r == 0)
			prime = 0;
		r += 2;
	}
	while (prime == 0)
	{
		nb++;
		prime = ft_is_prime(nb);
	}
	return (nb);
}
