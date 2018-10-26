/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:53:10 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/25 12:39:44 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int *a;
	int i;
	int min;
	int max;

	scanf("%d %d", &min, &max);
	i = 0;
	a = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d", a[i]);
		i++;
	}
	return (0);
}
