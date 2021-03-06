/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 18:32:28 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/31 18:35:04 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->str);
		list = list->next;
	}
}
