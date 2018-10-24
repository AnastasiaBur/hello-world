/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 13:52:51 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/24 13:02:29 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
