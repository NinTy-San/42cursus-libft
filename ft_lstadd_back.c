#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
		if (!(*lst) || !new)
			return;
		while ((*lst))
			(*lst) = (*lst)->next;
		new = (*lst)->next;
		new->next = NULL;
}
