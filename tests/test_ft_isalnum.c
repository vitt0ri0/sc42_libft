#include <ctype.h>
#include "../ft_putstr.c"
#include "../ft_putnbr.c"
#include "../ft_putchar.c"
#include "../ft_isalnum.c"
#include "../ft_isalpha.c"
#include "../ft_isdigit.c"
#include <stdio.h>

int main(void)
{
	for(unsigned char i = 32; i < 128; i++)
	{
		ft_putchar(i);
		ft_putstr(" res: ");
		ft_putnbr(ft_isalnum(i));		
		printf(" %s\n", ft_isalnum(i) && isalnum(i) || ft_isalnum(i) == isalnum(i) ? "OK!": "WRONG!");
	}

	return (0);
}
