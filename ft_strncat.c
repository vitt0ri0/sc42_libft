#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*init_pos;
	size_t	iter;
	
	iter = 0;
	init_pos = dest;
	while (*dest)
		dest++;
	while (*src && iter < n)
	{
		*dest = *src;
		dest++;
		src++;
		iter++;
	}
	*dest = '\0';
	return (init_pos);
}
