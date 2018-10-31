/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myprogram.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:41:00 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/27 17:09:40 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	star(char *s1, char *s2, int i, int j)
{
	while (s2[j] == '*' && s2[j] != '\0')
		j++;
	while (s2[j] != s1[i] && s1[i] != '\0')
		i++;
}

int		match(char *s1, char *s2)
{
	int res;
	int i;
	int j;

	i = 0;
	j = 0;
	res = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s2[j] == '*')
			star(s1, s2, i, j);
		if (s2[j] == s1[i] && s1[i] != '\0')
		{
			i++;
			printf("match %d ", i);
		}
		j++;
	}
	if (s1[i] == '\0' && s2[j] == '\0')
		res = 1;
	return (res);
}

int		main(void)
{
	char	*str1 = "main";
	char	*str2 = "ma*n";

	printf("\n result: %d\n1 %s\n2 %s\n", match(str1, str2), str1, str2);
	return (0);
}
