/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:34:04 by adohou            #+#    #+#             */
/*   Updated: 2022/05/21 16:34:07 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
	char	*str;
	unsigned int	p;
	size_t	slen;

	slen = ft_strlen(s);
	str = malloc(sizeof (char) * slen + 1);
	if (str == NULL)
		return (NULL);
	p = 0;
	while (s[p])
	{
		str[p] = (*f) (p, s[p]);
		p++;
	}
	str[p] = '\0';
	return (str);
}

/* char test1(unsigned int n, char c)
{
	return (n + c);
}

int	main()
{
	char *str;

	str = ft_strmapi("abcde", test1);
	printf("str = %s", str);
} */

