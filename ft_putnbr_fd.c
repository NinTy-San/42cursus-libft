/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:08:02 by adohou            #+#    #+#             */
/*   Updated: 2022/05/23 15:08:04 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n >= 0 && n <= 9)
			ft_putchar_fd(n + '0', fd);
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(n *(-1), fd);
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
	}
}

/* int	main()
{
	ft_putnbr_fd(0,1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(10,1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-1,1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483648,1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2147483647,1);
} */
