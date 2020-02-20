/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_is_lovercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:01:34 by emetapod          #+#    #+#             */
/*   Updated: 2020/02/11 17:14:46 by emetapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_is_lovercase.c"
int	main()
{
	int res;
	printf("%d\n", ft_is_lovercase("helllo world"));
	printf("%d\n", ft_is_lovercase("hellO world"));
	printf("%d\n", ft_is_lovercase("hello D"));
	return 0;
}
