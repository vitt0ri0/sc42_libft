/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:12:17 by emetapod          #+#    #+#             */
/*   Updated: 2020/02/12 20:46:09 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *last;

	last = *begin_list;
	if (!last)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (last->next)
		last = last->next;
	new = ft_create_elem(data);
	if (new)
		last->next = new;
}
