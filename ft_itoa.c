/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:43:24 by adohou            #+#    #+#             */
/*   Updated: 2022/05/23 13:43:32 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}


char	*ft_itoa(int n)
{
	long nb;
	char	*str;
	int	slen;

	nb = (long ) n;
	slen = intlen(nb);
	str = malloc(sizeof(char) * slen + 1);
	if (!str)
		return (NULL);
	str[slen--] = '\0';
	while (slen >= 0 && nb != 0)
	{
		if (nb < 0)
			nb = -nb;
		*(str + slen) =  nb % 10 + '0';
		nb = nb / 10;
		slen--;
	}
	if (n < 0)
		str[slen] = '-';
	if (n == 0)
		str[slen] = '0';
	return (str);

}

/* int	main()
{
	printf("%s \n", ft_itoa(15));
	printf("%s \n", ft_itoa(-15));
	printf("%s \n", ft_itoa(+15));
	printf("%s \n", ft_itoa(2147483647));
	printf("%s \n", ft_itoa(-2147483648));
	printf("%s \n", ft_itoa(4294967295));
} */
