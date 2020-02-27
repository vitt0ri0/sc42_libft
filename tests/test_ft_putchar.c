#include "../libft.h"
#include "../ft_putchar.c"

int	main(void)
{
	for(unsigned char i = 32; i < 128; i++)
	{
		ft_putchar(i);
		ft_putchar('\n');
	}
	return (0);
}
