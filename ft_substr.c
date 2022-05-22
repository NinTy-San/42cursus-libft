/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:45:50 by adohou            #+#    #+#             */
/*   Updated: 2022/05/17 21:24:44 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	unsigned int	slenght;

	slenght = ft_strlen(s);
	if (len > slenght - start)
		len = slenght - start;
	if (start > slenght - 1)
		return ("");
	newstr = malloc(sizeof(char) * len + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	while (i < len && *(s + start + i))
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
