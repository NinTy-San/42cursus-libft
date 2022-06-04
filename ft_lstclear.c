#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = NULL;
	while ((*lst))
	{
		tmp = *lst;
		(*del)((*lst)->content);
		(*lst) = (*lst)->next;
		free(tmp);
	}
	free(*lst);
	(*lst) = NULL;
}
