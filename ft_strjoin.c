/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:57:03 by adohou            #+#    #+#             */
/*   Updated: 2022/05/17 18:07:23 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char  *s1, const char  *s2)
{
	char	*newstr;
	size_t	lens1;
	size_t	lens2;
	int		i;
	int		j;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	newstr = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	j = 0;
	while (lens1--)
		*(newstr + (j + 1)) = *(s1 + (j + 1));
	while (lens2--)
		*(newstr + j++) = *(s2 + i++);
	*(newstr + j) = '\0';
	return (newstr);
}

/*int	main()
{
	printf("new str = %s \n", ft_strjoin((char *)"it's ", "all good"));
}*/
