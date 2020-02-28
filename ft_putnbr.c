#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (!(n / 10 == 0))
			ft_putnbr(-(n / 10));
		ft_putchar(48 - n % 10);
	}
	else
	{
		if (n / 10 == 0)
			ft_putchar(48 + n % 10);
		else
		{
			ft_putnbr(n / 10);
			ft_putchar(48 + n % 10);
		}
	}
}
