#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *init_pos;

	init_pos = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (init_pos);
}
