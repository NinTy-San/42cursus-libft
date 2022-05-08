/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:07:17 by adohou            #+#    #+#             */
/*   Updated: 2022/05/05 21:44:54 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	// if (c >= 0 && c <= 9)
		// return (2048);
	// return (0);
	return(c >= 0 && c <= 9);

}
