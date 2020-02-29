#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t iter;

	iter = -1;
	while (++iter < n)
		((unsigned char *)dest)[iter] = ((unsigned char *)src)[iter];
	return (dest);
}
