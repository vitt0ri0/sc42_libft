#include "libft.h"

int ft_isalpha(int c)
{
	return (c <= 'z' && c >= 'a' || c >= 'A' && c <= 'Z');
}
