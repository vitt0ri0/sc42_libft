#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int iter;

	iter = -1;
	while (s[++iter])
		f(iter, s + iter);
}
