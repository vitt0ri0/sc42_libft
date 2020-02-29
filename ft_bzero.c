#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t iter;

	iter = -1;
	while (++iter < n)
	{
		((unsigned char *)s)[iter] = (unsigned char)0;
	}
	return (s);
}
