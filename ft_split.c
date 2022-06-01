/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:39:58 by adohou            #+#    #+#             */
/*   Updated: 2022/06/01 18:40:03 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tab_len(const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j)
			k++;
		i += j;
	}
	return (k);
}

void	set_elem(char **splited_tab, const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j)
			splited_tab[k++] = ft_substr(s, i, j);
		i += j;
	}
	splited_tab[k] = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**splited_tab;
	int		nb_elem;

/* 	if (!s)
	{
		splited_tab =  malloc (sizeof(char *));
		splited_tab[0] = NULL;
		return (splited_tab);
	} */
	nb_elem = tab_len(s, c);
	splited_tab = malloc(sizeof(char *) * (nb_elem + 1));
	set_elem(splited_tab, s, c);
	return (splited_tab);
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
