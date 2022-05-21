/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:58:00 by adohou            #+#    #+#             */
/*   Updated: 2022/05/21 17:58:02 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int	p;

	p = 0;
	while (s[p])
	{
		(*f) (p, s + p);
		p++;
	}
}

void test1(unsigned int p, char *s)
{
	while (*s)
	{
		if (s == s + p)
			*s = '?';
		s++;
	}
}

int	main()
{
	char *str;

	str = "abcdef";
	printf("str before iteri = %s", str);
	ft_striteri(str, test1);
	printf("str after iteri = %s", str);
}
