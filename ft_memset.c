#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t iter;

	iter = -1;
	while (++iter < n)
	{
		((unsigned char *)s)[iter] = (unsigned char)c;
	}
	return (s);
}
