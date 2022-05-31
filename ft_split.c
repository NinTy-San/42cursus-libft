#include "libft.h"

int		tabLen(const char *s, char c)
{
	char	*elem;
	int	i;
	int j;
	int	k;

	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
		{
			i++;
			j++;
		}

	}


}

char	**ft_split(const char *s, char c)
{
	char	**splitedTab;
	int		nbElem;

	nbElem = tabLen(s, c);
}
