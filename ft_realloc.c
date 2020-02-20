/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 21:17:15 by tfarenga          #+#    #+#             */
/*   Updated: 2020/02/16 21:17:32 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *old_line, unsigned int *buf_size)
{
	char			*new_line;
	unsigned int	old_buf_size;
	unsigned int	new_buf_size;
	unsigned int	i;

	old_buf_size = *buf_size;
	new_buf_size = old_buf_size * 2;
	*buf_size = new_buf_size;
	i = 0;
	new_line = malloc(new_buf_size);
	while (i < old_buf_size && old_line[i])
	{
		new_line[i] = old_line[i];
		i++;
	}
	new_line[i] = TERM;
	free(old_line);
	return (new_line);
}

char	*ft_malloc_a_by_b(int a, int b)
{
	char			*new_line;
	unsigned int	len;

	len = a * b + 2;
	new_line = malloc(len);
	return (new_line);
}
