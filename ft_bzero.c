/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:38:46 by adohou            #+#    #+#             */
/*   Updated: 2022/05/10 14:26:57 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main()
{
	char	s1[] = "abcdef";
	char	s2[] = "ghijkl";
	

	printf("\n s1 before bz = %s", s1);
	bzero(s1, 2);
	printf("\n s1 after bz = %s", s1);
	printf("\n s2 before ft_bz = %s", s2);
	ft_bzero(s2, 2);
	printf("\n s2 after bz = %s", s2);
}*/
