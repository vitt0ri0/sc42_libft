#include "../ft_memcpy.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char	str[24] = "basic str hop hey";
	int	num[11] = {1, 500, 11, 25, 665, 555, 15, 123, 45, 255114, 7};
	int	num_d[15] = {0};
	int	num_dq[15] = {0};
	int	numq[11] = {1, 500, 11, 25, 665, 555, 15, 123, 45, 255114, 7};
	char	strq[24] = "basic str hop hey";
	char	str_d[30] = "new_str11111111111";
	char	str_dq[30] = "new_str11111111111";	


	printf("dst: %s | ", str_d);
	ft_memcpy(str_d, str, 9);
	memcpy(str_dq, strq, 9);
	printf("src: %s | n_dst: %s |res: %s\n", str, str_d, strcmp(str_d, str_dq) == 0 ? "OK!" : "WRONG!");

	printf("Src / dst:\n");
	for(int i = 0; i < 11; i++)
	{
		printf("%d, ", num[i]);
	}
	printf("\n");
	for(int i = 0; i < 15; i++)
	{
		printf("%d, ", num_d[i]);
	}
	printf("\n");
	ft_memcpy(num_d, num, 5);

	printf("\nNew dst:\n");
	for(int i = 0; i < 15; i++)
	{
		printf("%d, ", num_d[i]);
	}
	
	memcpy(num_dq, numq, 5);
	int count = 0;
	for(int i = 0; i < 15; i++)
	{
		if (num_d[i] == num_dq[i])
			count++;
	}
	printf("\nres: %s", count == 15 ? "OK!": "SUCK!");

//	printf("new_str: %s | res: %s\n", str,	strcmp(str, memset(strq, 42, 8)) == 0 ? "OK!" : "WRONG!");

}
