#include <stdio.h>
#include "../ft_strncat.c"
#include <string.h>
#include "../ft_strcmp.c"

int main(void)
{
	char *s1 = "hello";
	char *p1;
	char b1[25] = "wtf_a ";
	char b2[25] = "wtf_a ";
	char *p2;
	p1 = ft_strncat(b1, s1, 0);
	p2 = strncat(b2, s1, 0);
	printf("str: %s | ft_ncat: %s | st_cat: %s| res: %s\n", s1, p1, p2, ft_strcmp(p1, p2) == 0 ? "OK" : "SUUCK!");

	char *s1q = "hello";
	char *p1q;
	char b1q[25] = "wtf_a ";
	char b2q[25] = "wtf_a ";
	char *p2q;
	p1q = ft_strncat(b1q, s1q, 3);
	p2q = strncat(b2q, s1q, 3);
	printf("str: %s | ft_ncat: %s | st_cat: %s| res: %s\n", s1q, p1q, p2q, ft_strcmp(p1q, p2q) == 0 ? "OK" : "SUUCK!");

	char *s1w = "hello";
	char *p1w;
	char b1w[25] = "wtf_a ";
	char b2w[25] = "wtf_a ";
	char *p2w;
	p1w = ft_strncat(b1w, s1w, 5);
	p2w = strncat(b2w, s1w, 5);
	printf("str: %s | ft_ncat: %s | st_cat: %s| res: %s\n", s1w, p1w, p2w, ft_strcmp(p1w, p2w) == 0 ? "OK" : "SUUCK!");
	
	char *s1e = "hello";
	char *p1e;
	char b1e[25] = "wtf_a ";
	char b2e[25] = "wtf_a ";
	char *p2e;
	p1e = ft_strncat(b1e, s1e, 6);
	p2e = strncat(b2e, s1e, 6);
	printf("str: %s | ft_ncat: %s | st_cat: %s| res: %s\n", s1e, p1e, p2e, ft_strcmp(p1e, p2e) == 0 ? "OK" : "SUUCK!");


	char *s1r = "hello";
	char *p1r;
	char b1r[25] = "wtf_a ";
	char b2r[25] = "wtf_a ";
	char *p2r;
	p1r = ft_strncat(b1r, s1r, 10);
	p2r = strncat(b2r, s1r, 10);
	printf("str: %s | ft_ncat: %s | st_cat: %s| res: %s\n", s1r, p1r, p2r, ft_strcmp(p1r, p2r) == 0 ? "OK" : "SUUCK!");

return (0);
}
