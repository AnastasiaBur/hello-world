/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 19:01:58 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/21 22:38:02 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_lower(int size);
void	ft_line(int size, int floor, int width, int step);
void	ft_spaces(int spaces);

void	sastantua(int size)
{
	int floor;
	int height;
	int step;
	int width;

	floor = 1;
	width = 1;
	if (size < 1)
		size = 0;
	while (size >= floor)
	{
		step = 0;
		height = floor + 2;
		while (height > step)
		{
			width += 2;
			ft_spaces((ft_lower(size) - width) / 2);
			ft_line(size, floor, width, step);
			ft_putchar('\n');
			step++;
		}
		floor++;
		width = width + 4 + 2 * ((floor - 2) / 2);
	}
}

int		ft_lower(int size)
{
	int floor;
	int width;
	int change;

	floor = 1;
	width = 1;
	change = 4;
	while (floor <= size)
	{
		width += (floor + 2) * 2;
		floor++;
		width += change;
		if (floor % 2 != 0 && floor < size)
			change += 2;
	}
	width -= change;
	return (width);
}

void	ft_spaces(int spaces)
{
	while (spaces > 0)
	{
		ft_putchar(' ');
		spaces--;
	}
}

void	ft_line(int s, int f, int w, int t)
{
	int	d;
	int c;

	d = ((f - 1) / 2) * 2 + 1;
	c = 0;
	while (w > c)
	{
		if (c == 0)
			ft_putchar('/');
		else if (c == w - 1)
			ft_putchar('\\');
		else
		{
			if (c < (w + d) / 2 && c >= (w - d) / 2 && f - t + 2 <= d && f == s)
				if (d >= 5 && c == (w + d) / 2 - 2 && t == f - d / 2 + 1)
					ft_putchar('$');
				else
					ft_putchar('|');
			else
				ft_putchar('*');
		}
		c++;
	}
}
