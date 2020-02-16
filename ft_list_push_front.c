/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:48:55 by emetapod          #+#    #+#             */
/*   Updated: 2020/02/12 20:45:58 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	new = ft_create_elem(data);
	if (new)
		new->next = *begin_list;
	*begin_list = new;
}
