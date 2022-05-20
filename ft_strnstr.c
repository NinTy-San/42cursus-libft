/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:22:17 by adohou            #+#    #+#             */
/*   Updated: 2022/05/16 19:41:34 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i <= len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (little[j]) && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";

	printf("ft_strnstr = %s", ft_strnstr(largestring, smallstring, 4));
}*/
