#include <string.h>
#include <stdlib.h>
#include "libft.h"

void *ft_memalloc(size_t size)
{
    void *ptr;

    ptr = (void*)malloc(sizeof(ptr) * size);
    if (!ptr)
        return (NULL);
    ptr = ft_memset(ptr, 'a', size);
    return(ptr);
}