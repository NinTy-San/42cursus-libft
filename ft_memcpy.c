/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:11:56 by adohou            #+#    #+#             */
/*   Updated: 2022/05/10 16:49:12 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*sc;
	size_t	i;

	dst = (char *) dest;
	sc = (char *) src;
	i = 0;
	while (sc[i] && i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	if (n)
		dst[i] = '\0';
	return ((void *)dst);
}

/*int	main ()
{
	const char src[50] = "it's all good";
   	char dest[50];
   
	strcpy(dest,"Heloooo!!");
  	 printf("Before memcpy dest = %s\n", dest);
   	ft_memcpy(dest, src, strlen(src)+1);
   	printf("After memcpy dest = %s\n", dest);
}*/
