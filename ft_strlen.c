/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:46:42 by adohou            #+#    #+#             */
/*   Updated: 2022/05/04 17:52:15 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	// int	i;

	// i = 0;
	// while (str[i])
	// 	i++;
	// return (i);

//	return(  *str   ? 1 +  ft_strlen(str++)   : 0 );

	if(*str)
		return(1 +  ft_strlen(str++));
	return(0);


}
