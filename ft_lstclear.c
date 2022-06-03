#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	while ((*lst))
	{
		(*del)((*lst)->content);
		(*lst) = (*lst)->next;
	}
	free(lst);
}
