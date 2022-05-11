/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:59:59 by adohou            #+#    #+#             */
/*   Updated: 2022/05/11 13:14:46 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (isalpha(c))
		if (c >= 'a' && c <= 'z')
			c -= 32;
	return (c);
}

/*int 	main()
{
	printf("\n toupper = %c", toupper('b'));
	printf("\n ft_toupper = %c \n", ft_toupper('b'));
}*/
