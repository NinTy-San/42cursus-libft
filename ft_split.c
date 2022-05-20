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
static int	chech_char(char c, char d)
{
	if (c == d)
		return (1);
	return (0);
}
static int	nb_elem(const char *s, char del)
{
	int	i;
	int	elem;

	i = 0;
	elem = 1;
	while (s[i])
		if (chech_char(s[i++], del))
			elem++;
	return (elem);
}

static char	*set_elem(const char *str, char c, int *p)
{
	char	*elem;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = *p;
	while (!chech_char(str[*p], c))
	{
		i++;
		*p = *p + 1;
	}
	*p = *p + 1;
	elem = (char *) malloc(sizeof(char) * i + 1);
	while (j < i)
		elem[j++] = str[k++];
	elem[j] = '\0';
	return (elem);
}

char	**ft_split(const char *s, char c)
{
	char **splitTab;
	int	i;
	int j;
	int	len;

	len = nb_elem(s, c);
	splitTab = malloc(sizeof(char *) * len + 1);
	i = 0;
	j = 0;
	while (i < len)
		splitTab[i++] = set_elem(s, c, &j);
	splitTab[i] = NULL;
	return(splitTab);
}
/*
int	main()
{
	char	**split;
	const char	*str;
	char	del;
	int	i;

	str = "ouais on est ou ?";
	del = 'o';
	i = 0;
	split = ft_split(str, del);
	while (i < (nb_elem(str, del)))
		printf("elem = %s \n", split[i++]);
	free(split);
}
 */