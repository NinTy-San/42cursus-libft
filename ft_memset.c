

#include <stdlib.h>

void * ft_memset( void* pointer, int value, size_t count )
{

    int *ptr;

    ptr = (int*) pointer;

    if(!pointer)
        return(NULL);

    while(count)
   // {
     
            ptr[count--] = value;
     //   *(ptr  + count)= value;
     //   count--;
    //} 
    return(ptr);
}




void ft_bzero(void * s , size_t n    )
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




}