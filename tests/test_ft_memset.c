#include "../ft_memset.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char	str[24] = "123abc456def789ghi0jklm";
	int	num[11] = {1, 25, 11, 25, 665, 555, 15, 123, 45, 255114, 7};
	int	numq[11] = {1, 25, 11, 25, 665, 555, 15, 123, 45, 255114, 7};
	char	strq[24] = "123abc456def789ghi0jklm";

	printf("str: %s | ", str);
	ft_memset(str, 42, 8);
	printf("new_str: %s | res: %s\n", str,	strcmp(str, memset(strq, 42, 8)) == 0 ? "OK!" : "WRONG!");

	printf("Num_array:\n");
	for(int i = 0; i < 11; i++)
	{
		printf("%d, ", num[i]);
	}
	ft_memset(num, 10, 10);

	printf("\nNew Num_array:\n");
	for(int i = 0; i < 11; i++)
	{
		printf("%d, ", num[i]);
	}
	
	memset(numq, 10, 10);
	int count = 0;
	for(int i = 0; i < 11; i++)
	{
		if (num[i] == numq[i])
			count++;
	}
	printf("\nres: %s", count == 11 ? "OK!": "SUCK!");

//	printf("new_str: %s | res: %s\n", str,	strcmp(str, memset(strq, 42, 8)) == 0 ? "OK!" : "WRONG!");

}
