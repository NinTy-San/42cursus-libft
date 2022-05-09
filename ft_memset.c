/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:08:34 by adohou            #+#    #+#             */
/*   Updated: 2022/05/09 14:33:59 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *) s;
	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
		ptr[i++] = c;
	return (ptr);
}

/*int     main()
{
        char str[] = "it was all a dream";  

      printf("\n memset() =    %p", memset(str, '?', 3));        
      printf("\n ft_memset() = %p \n", ft_memset(str, '?', 3));  
}*/

/*void ft_bzero(void * s , size_t n    )
{
    ft_memset(s,0, n);   
}

void    ft_putstr_fd(char *str , int fd)
{
    // int i;
    // i = 0;
    // while ( *str++ )
    // {
    //     write(fd , str[i] , 1)         ;   
    // }
    

    write( fd, str , ft_strlen(str)    );




}*/
