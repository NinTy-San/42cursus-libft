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

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*tstr;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1)
	{
		k = 0;

		while (set[k])
		{
			if (s1[i] == set[k])
				i++;
			if (s1[j] == set[k])
				j--;
			k++;
		}
	}

}

int	main()
{
	ft_strtrim("xyzabcdefxyz", "xyz");
}
