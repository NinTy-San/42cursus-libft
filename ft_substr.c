/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:45:50 by adohou            #+#    #+#             */
/*   Updated: 2022/05/17 14:38:29 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	int		i;

	if (!s || !len)
		return (NULL);
	newstr = malloc(sizeof(char) * len + 1);
	i = 0;
	while (len-- && *(s + start + i))
	{
		*(newstr + i) = *(s + start + i);
		i++;
	}
	*(newstr + i) = '\0';
	return (newstr);
}
/*
int	main()
{
	printf("new str = %s", ft_substr("salut", 1, 9));
}*/
