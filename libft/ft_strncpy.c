#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;

    for (i = 0; n > 0 && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
        n--;
    }
    while (n > 0)
    {
        dest[i] = '\0';
        n--;
    }
    return dest;
}