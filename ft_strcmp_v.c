/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_v.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 22:47:52 by emetapod          #+#    #+#             */
/*   Updated: 2020/02/14 22:47:54 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp_v(void *p1, void *p2)
{
	char *s1 = (char*) p1;
	char *s2 = (char*) p2;

	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
