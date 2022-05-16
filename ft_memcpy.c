/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:11:56 by adohou            #+#    #+#             */
/*   Updated: 2022/05/16 19:42:15 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*sc;
	char		*dst;

	sc = src;
	dst = dest;
	while (n--)
		*dst++ = *sc++;
	return (dest);
}

/*int	main()
{
	char s1[] = "salut";
	char d1[] = "hello";
	char s2[] = "salut";
	char d2[] = "hello";
  	printf("memcpy = %s \n", (char *) memcpy(d1, s1, 4));
  	printf("ft_memcpy = %s \n", (char *) ft_memcpy(d2, s2, 4));
}*/

/*int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    int * copy = NULL;
    int length = sizeof( int ) * 5;
       
    // Memory allocation and copy 
    copy = (int *) malloc( length );
    memcpy( array + 2, array, length );
        
    // Display the copied values 
    for( length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );
        
    free( copy );
    
    return EXIT_SUCCESS;
}*/
