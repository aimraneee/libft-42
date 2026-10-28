#include "libft.h"

unsigned int	ft_lstsize(t_list	*lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
