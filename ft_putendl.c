#include "libft.h"

void	ft_putendl(char const *s)
{
	while (*s)
		write(1, s++, 1);
	ft_putchar('\n');
}
