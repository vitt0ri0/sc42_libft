#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
char	*ft_strstr(const char *initial, const char *to_find);
int	ft_strcmp(const char *s1, const char *s2);

void	ft_putnbr_e(int n);

#endif
