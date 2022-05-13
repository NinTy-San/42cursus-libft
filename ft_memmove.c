/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:00:01 by adohou            #+#    #+#             */
/*   Updated: 2022/05/13 18:45:54 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	char		*tmpdest;

	s = src;
	d = dest;
	if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		s = s + (n -1);
		tmpdest = d + (n -1);
		while (n--)
		{
			*tmpdest-- = *s--;
		}	
	}
	return (d);
}

/*int 	main()
{
	const char	src[] = "salut";
	char dest[] = "it was all a dream";

	printf("\n ft_memmove = %s \n", (char *) ft_memmove(dest, src, 4));
}*/
