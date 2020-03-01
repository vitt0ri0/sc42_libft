#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n);
{
	size_t i;
	
	if (dest > src)
	{
		i = n;
		while (--i >= 0)
			((unsigned char *)d)[i] = ((unsigned char *)s)[i];
	}
	else
	{
		i = -1;
		while (++i < n)
			((unsigned char *)d)[i] = ((unsigned char *)s)[i];
	}
	return (d);
}
