/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:59:04 by adohou            #+#    #+#             */
/*   Updated: 2022/05/13 20:24:57 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t	i;
	str = s;
	c = (unsigned int) c;
	i = 0;
	while (str && i < n)
	{
		if (*str == c)
			return ((char *) str);
		str++;
		i++;
	}
	return (NULL);
}

/*int   main()
{
        char    str[] = "abcefghigkl";

        printf("\n strchr = %s", (char *) memchr(str, 'c', 5));
        printf("\n ft_strchr = %s \n", (char *) ft_memchr(str, 'c', 55555));
}*/
