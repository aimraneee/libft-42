#include "libft.h"

void	ft_lstdelone(t_list	*lst, void (*del)(void	*))
{
	if (lst == NULL || del == NULL)
		return ;
	if (lst->content == NULL)
	{
		free(lst);
		return ;
	}
	del(lst->content);
	free(lst);
}
