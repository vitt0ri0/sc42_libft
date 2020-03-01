#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (--n > = 0)
	{
		if ((unsigned char)(*s) == unsigned char(c))
			return s;
		s++
	}
	return (NULL);
}
