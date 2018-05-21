#include <string.h>
#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t len_dest = strlen(dest);
    size_t i;

    for (i = 0 ; i < n && src[i] != '\0' ; i++)
    {
        dest[len_dest + i] = src[i];
    }
    dest[len_dest + i] = '\0';
    return dest;
}
