/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:29:31 by adohou            #+#    #+#             */
/*   Updated: 2022/05/09 16:13:31 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
size_t	ft_strlen(char *s);
void	*ft_memset(void *s, int c, size_t n);
#endif
