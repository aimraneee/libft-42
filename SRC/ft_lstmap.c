#include "libft.h"

static t_list	*ft_lstnews(void	*content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

static void	ft_lstclears(t_list	**lst, void (*del)(void	*))
{
	t_list	*c;
	t_list	*temp;

	if (lst == NULL)
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

static void	ft_lstadd_backs(t_list	**lst, t_list	*new)
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

t_list	*ft_lstmap(t_list	*lst, void *(*f)(void	*), void (*del)(void	*))
{
	t_list	*new_list;
	t_list	*node;
	void	*cnt;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		cnt = f(lst->content);
		node = ft_lstnews(cnt);
		if (node == NULL)
		{
			ft_lstclears(&new_list, del);
			if (cnt != NULL)
				del(cnt);
			return (NULL);
		}
		ft_lstadd_backs(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
