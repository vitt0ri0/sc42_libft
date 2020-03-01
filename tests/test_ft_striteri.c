#include "../ft_striteri.c"
#include <unistd.h>

void ft_printchar(unsigned int n, char *str)
{
	int num = '0' + n;
	write(1, &(num), 1);
	write(1, str, 1);
}

int main(void)
{
	char str[10] = "Hello !";
	ft_striteri(str, ft_printchar);
	return (0);
}
