#include "headers.h"
void	print_tree_node(void *tr)
{
	if (tr)
	{
		ft_putstr(((t_btree*)tr)->item);
		ft_putstr("\n");
	}
}
