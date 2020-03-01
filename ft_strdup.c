#include "libft.h"

char	*ft_strdup(const char *src)
{
	int	counter;
	char	*p;

	counter = 0;
	while (!(*(src + counter) == '\0'))
		counter++;
	p = (char *)malloc(sizeof(*src) * (counter + 1));
	while (counter >= 0)
	{
		*(p + counter) = *(src + counter);
		counter--;
	}
	return (p);
}
