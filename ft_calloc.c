/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:58:07 by adohou            #+#    #+#             */
/*   Updated: 2022/05/16 20:33:09 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
    #include <stdint.h>

    void	*ft_calloc(size_t nmemb, size_t size)
    {
        void	*ptr;
        size_t	mlen;

        mlen = nmemb * size;
        ptr = malloc(mlen);
        if (!ptr)
            return (NULL);
        ft_bzero(ptr, mlen);
        return (ptr);
    }

    #include <assert.h>

    #define INT_NUMBER 10

    /* int main() {

        int i;
        int * pointer = (int *) ft_calloc( SIZE_MAX, SIZE_MAX);

        // Un petit test sur le bon fonctionnement de calloc
        // assert( pointer != NULL );
        // Le dernier élément du tableau ne sera pas affecté par la
        // boucle mais n'oubliez pas que calloc initialise de toute
        // façon à 0 chaque octet.

        for ( i=0; i<INT_NUMBER-1; i++ ) {
            pointer[i] = i;
        }

        // On affiche le contenu du tableau d'entier
        // Ce qui donne : 0 1 2 3 4 5 6 7 8 0
        for (i=0; i<INT_NUMBER; i++ ) {
            printf( "%d ", pointer[i] );
        }
        printf( "\n" );

        // On libère le bloc de mémoire alloué dynamiquement
        free( pointer );

        return 0;
    } */
/*     int main()
    {
        char    *cstr;

        cstr = ft_calloc(SIZE_MAX, SIZE_MAX);
        printf("%s",cstr);
    }
 */
