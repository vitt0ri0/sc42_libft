/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:44:15 by emetapod          #+#    #+#             */
/*   Updated: 2020/02/12 19:31:21 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		ft_putstr("\n");
		list = list->next;
	}
}
