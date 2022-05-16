/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:57:11 by adohou            #+#    #+#             */
/*   Updated: 2022/05/16 19:40:57 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	slen;

	slen = ft_strlen((char *) s);
	dest = (char *)malloc(sizeof (char *) * slen + 1);
	ft_memcpy(dest, s, slen);
	return (dest);
}

/*int   main()
{
        char    txt[]="mon test";
        char    *dest;

        dest = ft_strdup(txt);
        printf("%s", dest);
}*/
