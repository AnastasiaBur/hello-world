/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 18:22:22 by jsanford          #+#    #+#             */
/*   Updated: 2018/10/31 18:40:08 by jsanford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list	t_list;

struct					s_list
{
	char				*str;
	t_list				*next;
};

t_list					*add_link(t_list *list, char *str);
void					print_list(t_list *list);
void					ft_putstr(char *str);

#endif
