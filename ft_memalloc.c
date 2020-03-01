#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = malloc(size);
	if (!(ptr))
		return (NULL);
	return (ft_bzero(ptr, size));
}
