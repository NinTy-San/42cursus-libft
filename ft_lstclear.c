/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:38:04 by adohou            #+#    #+#             */
/*   Updated: 2022/06/07 15:38:09 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
