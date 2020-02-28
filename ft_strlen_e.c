#include "libft.h"

size_t	ft_strlen_e(const char *str)
{
	char *start;

	start = (char *)str;
	while (*str)
		str++;
	return ((size_t)(str - start));
}
