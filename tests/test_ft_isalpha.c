#include <ctype.h>
#include <stdio.h>
#include "../ft_isalpha.c"
#include "../ft_putchar.c"
#include "../ft_putstr.c"
#include "../ft_putnbr.c"


int main(void)
{
	for(unsigned char i = 32; i < 128; i++)
	{
		ft_putchar(i);
		ft_putstr(" res: ");
		ft_putnbr(ft_isalpha(i));		
		printf(" %s\n", ft_isalpha(i) && isalpha(i) || ft_isalpha(i) == isalpha(i) ? "OK!": "WRONG!");
	}

	return (0);
}
