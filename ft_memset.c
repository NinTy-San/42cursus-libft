/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:08:34 by adohou            #+#    #+#             */
/*   Updated: 2022/05/10 14:17:51 by adohou           ###   ########.fr       */
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
        char s1[] = "it was all a dream";
        char s2[] = "it was all a dream";
      	
	printf("\n s1 befor memset() =    %s", s1);
	memset(s1, '?', 3);        
      	printf("\n s1 after memset() =    %s \n", s1);        
      	printf("\n s2 befor ft_memset() = %s ", s2);  
	ft_memset(s2, '?', 3);        
	printf("\n s2 after ft_memset() = %s \n", s2);  
}*/

/*void    ft_putstr_fd(char *str , int fd)
{
    // int i;
    // i = 0;
    // while ( *str++ )
    // {
    //     write(fd , str[i] , 1)         ;   
    // }
    

    write( fd, str , ft_strlen(str)    );




}*/
