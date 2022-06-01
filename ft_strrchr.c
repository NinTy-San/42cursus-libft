/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:47:47 by adohou            #+#    #+#             */
/*   Updated: 2022/05/11 16:29:49 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		slen;
	char	*str;

	if (!c)
		return ((char *) s + ft_strlen(s));
	str = (char *) s;
	slen = ft_strlen(str) - 1;
	while (slen >= 0)
	{
		if ((unsigned char) str[slen] == (unsigned char)c)
			return (str + slen);
		slen--;
	}
	return (NULL);
}

/* int	main()
{
	char *str = "it was all a dream";

	printf("\n strrchr = %s|", strrchr(str,'i'+256));
	printf("\n ft_strrchr = %s| \n", ft_strrchr(str,'i'+256));
}
 */
