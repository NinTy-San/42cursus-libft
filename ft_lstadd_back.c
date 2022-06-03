#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
		while ((*lst)->next)
			lst = (*lst)->next;
		new = (*lst)->next;
		new->next = NULL;
}
