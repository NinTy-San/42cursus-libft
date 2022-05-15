/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:22:17 by adohou            #+#    #+#             */
/*   Updated: 2022/05/14 17:02:37 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	
	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && len--)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (little[j]))
			j++;
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}

int	main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";

	printf("ft_strnstr = %s", ft_strnstr(largestring, smallstring, 4));
}
