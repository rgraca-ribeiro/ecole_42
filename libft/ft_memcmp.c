#include <string.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr_s1;
    unsigned char *ptr_s2;

    if (!s1 || !s2)
        return (0);
    ptr_s1 = (unsigned char*)s1;
    ptr_s2 = (unsigned char*)s2;
    while (n--)
    {
        if (*ptr_s1 != *ptr_s2)
            return(*ptr_s1 - *ptr_s2);
        ptr_s1++;
        ptr_s2++;
    }
    return (0);
}