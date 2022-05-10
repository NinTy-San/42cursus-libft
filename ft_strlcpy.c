/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:53:19 by adohou            #+#    #+#             */
/*   Updated: 2022/05/10 16:15:42 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size -1 && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (size)
		dst[i] = '\0';
	return (ft_strlen((char *)src));
}
/*int	main()
{
	char	src[] = "it's all good";
	char	dest[] = "abcdef";

	printf("\n len = %ld", ft_strlcpy(dest, src, 7));
	printf("\n dest = %s", dest);
}*/
