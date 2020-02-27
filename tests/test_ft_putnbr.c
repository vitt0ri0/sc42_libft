#include "../libft.h"

int main(void)
{
	int	test_arr[7] = {-2147483648, -520009, 0, 1, 256, 2147483647, -0};
	for(int i = 0; i < 7; i++)
	{
		ft_putstr("k: ");
		ft_putnbr(test_arr[i]);
		ft_putchar('\n');
		ft_putstr("e: ");
		ft_putnbr_e(test_arr[i]);
		ft_putchar('\n');
	}
	return (0);
}
