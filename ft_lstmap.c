#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*first;

	first = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		dst = ft_lstnew((*f)(lst->content));
		if (!dst)
		{
			ft_lstclear(&first, (*del));
			return (NULL);
		}
		if (!first)
			first = dst;
		else
			ft_lstadd_back(&first, dst);
		lst = lst->next;
	}
	return (first);
}
