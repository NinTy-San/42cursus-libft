/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:00:01 by adohou            #+#    #+#             */
/*   Updated: 2022/05/12 18:21:44 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*sc;
	char	*dst;
	
	sc = src;
	dst = dest;
	
	if (dst < sc)
		ft_memcpy(dst, sc, n);
	else
	{
		char	*tmp;	
		sc += (n - 1);
		dst += (n - 1);
		tmp = NULL;
		while (n--)
		{
			*tmp = *sc--;
			*dst-- = *tmp++;
		}	
		
	}
	return (dst);	
}

int 	main()
{
	const char	src[] = "salut";
//	char *dest = NULL;

	printf("\n ft_memmove = %s \n", (char *) ft_memmove((char *)src + 2, src, 4));
}
