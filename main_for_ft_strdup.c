/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:39:47 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/24 15:45:22 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src);
void	ft_putstr(char *str);

int		main(void)
{
	char	*src;

	src = "Hello, nice to see you!";
	ft_putstr(src);
	ft_putstr("\n");
	ft_putstr(ft_strdup(src));
	ft_putstr("\n");
	return (0);
}
