//printing
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(void *str);

//strings logic
int		ft_strcmp(char *s1, char *s2);
int		ft_strcmp_v(void *s1, void *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);

//my functions
int		ft_is_lovercase(char *str);


// day 11. Lists

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif

t_list		*ft_create_elem(void *data);
void	ft_print_list(t_list *list);
void	ft_list_push_front(t_list **begin, void *data);
void	ft_list_push_back(t_list **begin, void *data);

// TREES

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct          s_btree
{
        struct s_btree  *left;
        struct s_btree  *right;
        void                    *item;
}                                       t_btree;

t_btree *btree_create_node(void *item);

void	print_tree_node(void *tr);
t_btree *btree_create_simple_tree();

#endif
