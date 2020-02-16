/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:54:30 by emetapod          #+#    #+#             */
/*   Updated: 2020/02/12 21:00:02 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	if (!list)
		return (list);
	while (list->next)
		list = list->next;
	return (list);
}
