#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t total;
    char *ptr;

    if (!s)
        return (NULL);
    total = len - start;
    ptr = ft_memalloc(total + 1);
    if (!ptr)
        return(NULL);
    ptr[total] = '\0';
    total = 0;
    while (start < len)
    {
        ptr[total] = s[start];
        total++;
        start++;
    }
    return (ptr);
}
