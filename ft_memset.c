/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:08:34 by adohou            #+#    #+#             */
/*   Updated: 2022/05/08 21:41:22 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void * ft_memset( void * s, int c, size_t n )
{
    int *ptr;

    ptr = (int*) s;

    if(!s)
        return(NULL);
    while(n)
            ptr[n--] = c;
    return(ptr);
}

int	main()
{
	char str[] = "abcdef";	

	printf("\n memset() = %p", memset(str, '?', 3));	
	printf("\n ft_memset() = %p", ft_memset(str, '?', 3));	
}


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
