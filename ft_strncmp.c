/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:33:29 by adohou            #+#    #+#             */
/*   Updated: 2022/05/10 14:46:06 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s1[i] || s2[i]) && i < n -1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main()
{
	char s1[] = "it's all good";
	char s2[] = "it'z all good";

	printf("\n strncmp = %d", strncmp(s1, s2, 7));
	printf("\n strncmp = %d", ft_strncmp(s1, s2, 7));
}*/
