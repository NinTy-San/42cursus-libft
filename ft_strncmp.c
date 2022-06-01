/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:33:29 by adohou            #+#    #+#             */
/*   Updated: 2022/05/13 20:34:04 by adohou           ###   ########.fr       */
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
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/* int	main()
{
	// char s1[] = "hello";
	// char s2[] = "hllo";

	printf("\n strncmp = %d", strncmp("test\200", "test\0", 6));
	printf("\n strncmp = %d", ft_strncmp("test\200", "test\0", 6));
} */
