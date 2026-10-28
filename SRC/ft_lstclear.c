#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void	*))
{
	t_list	*c;
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	c = *lst;
	while (c != NULL)
	{
		if (c->content != NULL)
			del(c->content);
		temp = c;
		c = c->next;
		free(temp);
	}
	*lst = NULL;
}
