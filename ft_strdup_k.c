#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int	iter;

	p = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!(p))
		return (NULL);
	iter = 0;
	while (*s)
		p[iter++] = *s++;
	p[iter] = '\0';
	return (p);
}
