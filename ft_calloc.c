/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:58:07 by adohou            #+#    #+#             */
/*   Updated: 2022/06/07 15:36:59 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	mlen;

	mlen = nmemb * size;
	if (nmemb && mlen / nmemb != size)
		return (NULL);
	ptr = malloc(mlen);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, mlen);
	return (ptr);
}
