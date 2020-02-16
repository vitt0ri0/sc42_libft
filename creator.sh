#!/bin/sh
gcc -Wall -Wextra -Werror -c ft*.c btree*.c
ar rc libft.a *.o
rm *.o
ranlib libft.a
