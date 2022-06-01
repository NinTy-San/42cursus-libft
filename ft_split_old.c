/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:51:23 by adohou            #+#    #+#             */
/*   Updated: 2022/05/19 16:51:26 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
static int    chech_char(char c, char d)
{
    if (c == d)
        return (1);
    return (0);
}
static int    nb_elem(const char *s, char del)
{
    int    i;
    int    j;
    int    elem;


    i = 0;
    elem = 0;
    while (s[i])
    {
        j = 0;
        while (s[i] && chech_char(s[i], del))
            i++;
        while (s[i + j] && !chech_char(s[i + j], del))
            j++;
        if (j)
            elem++;
        i += j;
    }
    return (elem);
}

static char    *set_elem(const char *str, char c, int *p)
{
    char    *elem;
    int    i;
    int    k;

    i = 0;
    while (chech_char(str[*p], c))
        *p += 1;
    k = *p;
    while (str[*p] && !chech_char(str[*p], c))
    {
        i++;
        *p += 1;
    }
        elem = ft_substr(str, k, i);

    return (elem);
}

char    **ft_split(const char *s, char c)
{
    char **splitTab;
    int    i;
    int p;
    int    len;

	if (!s)
	{
		splitTab =  malloc (sizeof(char *));
		splitTab[0] = NULL;
		return (splitTab);
	}
    len = nb_elem(s, c);
    splitTab = malloc(sizeof(char *) * (len + 1));
    i = 0;
    p = 0;
    while (len && i < len)
    {
        splitTab[i] = set_elem(s, c, &p);
        i++;
    }
    splitTab[len] = NULL;
    return(splitTab);
}

/*  int    main()
{
    char    **split;
    int    i;

    i = 0;
    split = ft_split("     ", ' ');
    while (split[i])
        printf("elem = %s \n", split[i++]);
    free(split);
} */
