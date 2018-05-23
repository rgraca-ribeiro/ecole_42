#include <string.h>
#include <stdlib.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    void *buffer;

    buffer = (void*)malloc(sizeof(dest) * n);
    if (!buffer)
        return(NULL);
    ft_memcpy(buffer, src, n);
    ft_memcpy(dest, buffer, n);
    free(buffer);
    return(dest);
}