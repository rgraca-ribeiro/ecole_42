#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strnew(size_t size)
{
    char *ptr;

    ptr = (char*)malloc((size + 1) * sizeof(ptr));
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, size);
    return (ptr);
}