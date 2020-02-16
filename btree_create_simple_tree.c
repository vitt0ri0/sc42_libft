#include "headers.h"
#include <stdlib.h>

t_btree *btree_create_simple_tree()
{
	t_btree *tr1 = btree_create_node("node_1");
	t_btree *tr2 = btree_create_node("node_2");
	t_btree *tr3 = btree_create_node("node_3");
	t_btree *tr4 = btree_create_node("node_4");
	t_btree *tr5 = btree_create_node("node_5");

	tr1->left = tr2;
	tr1->right = tr3;
	tr2->left = tr4;
	tr2->right = tr5;

	return tr1;
}
