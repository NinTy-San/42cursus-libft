/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:23:36 by adohou            #+#    #+#             */
/*   Updated: 2022/05/13 20:22:20 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int	i;

	if (c == 0)
		return ((char *) s + ft_strlen(s));
	str = (char *) s;
	i = 0;
	while (str[i])
	{
		if ((unsigned char) str[i] == (unsigned char) c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	char	str[] = "abc";

	printf("\n strchr = %s", strchr(str, 'b'));
	printf("\n ft_strchr = %s \n", ft_strchr(str, 'b'));
}*/
