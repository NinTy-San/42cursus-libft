/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:43:29 by adohou            #+#    #+#             */
/*   Updated: 2022/05/18 16:43:41 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    check_set(char c, const char *set)
{
    int    i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(const char *s1, const char *set)
{
    char    *tstr;
    int        i;
    int        j;
    int        k;

    i = 0;
    j = ft_strlen(s1) - 1;
    while (check_set(s1[i], set) || (check_set(s1[j], set) && s1[i]))
    {
        while (check_set(s1[i], set))
            i++;
        while (check_set(s1[j], set) && s1[i])
            j--;
    }
    tstr = (char *) malloc(sizeof(char) * ((j + 2 - i)));
    if (!tstr)
        return (NULL);
    k = 0;
    while (i <= j)
        tstr[k++] = s1[i++];
    tstr[k] = '\0';
    return (tstr);
}

/* int	main()
{
	printf("trim = %s", ft_strtrim("xyzabcdefxyz", "xyz"));
} */
