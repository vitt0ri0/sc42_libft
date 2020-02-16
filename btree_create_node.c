/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 20:02:41 by emetapod          #+#    #+#             */
/*   Updated: 2020/02/14 20:39:26 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*tr;

	tr = malloc(sizeof(t_btree));
	if (tr)
	{
		tr->item = item;
		tr->left = (void *)0;
		tr->right = (void *)0;
	}
	return (tr);
}
