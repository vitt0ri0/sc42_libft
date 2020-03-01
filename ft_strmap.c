#include "libft.h"

char	*ft_strmap(char const  *s, char (*f)(char))
{
	char	*dest;
	int	l;

	l = ft_strlen(s);
	dest = (char *)malloc(l + 1);
	if (!(d))
		return (NULL);
	dest[l] = '\0';
	while (--l >= 0)
		dest[l] = f(s[l]);
	return (dest);
}
