#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int counter;

	counter = 0;
	while (src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = src[counter];
	return (dest);
}

