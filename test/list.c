/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 18:17:25 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/31 18:31:08 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

int		main(void)
{
	t_list *list;

	list = NULL;
	list = add_link(list, "toto\n");
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");
	print_list(list);
	return (0);
}
