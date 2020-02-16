/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 12:46:33 by emetapod          #+#    #+#             */
/*   Updated: 2020/02/14 21:40:36 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(void *string)
{
	char *str;
	str = (char*)string;
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}
