/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:15:35 by adohou            #+#    #+#             */
/*   Updated: 2022/05/11 13:20:57 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isalpha(c))
		if (c >= 'A' && c <= 'Z')
			c += 32;
	return (c);
}

/*int	main()
{
	printf("\n tolower = %c", tolower('L'));
	printf("\n ft_tolower = %c \n", ft_tolower('L'));
}*/
