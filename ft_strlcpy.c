/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:53:19 by adohou            #+#    #+#             */
/*   Updated: 2022/05/04 17:53:21 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
 //   unsigned int    srclen;

    i = 0;
 //   srclen = ft_strlen(src);
    while (src[i] && i< size -1 && size != 0)
    {
        dest[i] = src[i];
        i++;
    }
    if (size)
        dest[i] = 0;
    return (ft_strlen(src));
}