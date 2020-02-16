/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lovercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:00:37 by emetapod          #+#    #+#             */
/*   Updated: 2020/02/11 18:26:56 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_lovercase(char *str)
{
	str--;
	while (*(++str) != 0)
		if ((*str < 97 || *str > 122) && *str != 32)
			return (0);
	return (1);
}
