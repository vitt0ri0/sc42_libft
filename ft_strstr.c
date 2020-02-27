#include "libft.h"

char	*ft_strstr(const char *input, const char *find)
{
	int iter;

	iter = 0;
	if (!(*find))
		return ((char *)input);
	while (*input)
	{
		while (*(find + iter) && *(input + iter) == *(find + iter))
			iter++;
		if (!(*(find + iter)))
			return ((char *)input);
		input++;
		iter = 0;
	}
	return (NULL);
}
