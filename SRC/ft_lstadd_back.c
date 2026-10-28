#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*c;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	c = (*lst);
	while (c->next != NULL)
		c = c->next;
	c->next = new;
}
