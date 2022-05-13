/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:34:49 by adohou            #+#    #+#             */
/*   Updated: 2022/05/13 20:56:31 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	const char		*str1;	
	const char		*str2;	

	str1 = s1;
	str2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && (str1[i] || str2[i]) && i < n -1)
		i++;
	return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}

/*int   main()
{
        char s1[] = "helloworld";
        char s2[] = "hellomonde";

        printf("\n strncmp = %d", memcmp(s1, s2, 8));
        printf("\n ft_strncmp = %d", ft_memcmp(s1, s2, 8));
}*/
