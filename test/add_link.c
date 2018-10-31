/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 18:29:31 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/31 18:45:38 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_list *add_link(t_list *list, char *str)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if(tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}
