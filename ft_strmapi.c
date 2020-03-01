#include "libft.h"

char	*ft_strmapi(char const  *s, char (*f)(unsigned int, char))
{
	char		*dest;
	unsigned int	l;

	l = ft_strlen(s);
	dest = (char *)malloc(l + 1);
	if (!(d))
		return (NULL);
	dest[l] = '\0';
	while (--l >= 0)
		dest[l] = f(l, s[l]);
	return (dest);
}
