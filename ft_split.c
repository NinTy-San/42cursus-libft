#include "libft.h"

int	tabLen(const char *s, char c)
{
	int	i;
	int j;
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

void setElem(char **splitedTab, const char *s, char c)
{
	int	i;
	int j;
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
			splitedTab[k++] = ft_substr(s, i, j);
		i += j;
	}
	splitedTab[k] = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**splitedTab;
	int		nbElem;

/* 	if (!s)
	{
		splitedTab =  malloc (sizeof(char *));
		splitedTab[0] = NULL;
		return (splitedTab);
	} */
	nbElem = tabLen(s, c);
	splitedTab = malloc(sizeof(char *) * (nbElem + 1));
	setElem(splitedTab, s, c);
	return (splitedTab);
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
