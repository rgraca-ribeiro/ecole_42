#include <string.h>
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *ptr_dest;
    const char *ptr_src;

    ptr_dest = dest;
    ptr_src = src;
    while (n > 0)
    {
        *ptr_dest = *ptr_src;
        ptr_dest++;
        ptr_src++;
        n--;
    }
    return(dest);
}
