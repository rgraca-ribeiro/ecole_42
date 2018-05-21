#include <string.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char    *str;

    str = NULL;
    while (*s)
    {
        if (*s == (char)c)
            str = (char*)s;
        s++;
    }
    if (*s == (char)c)
        str = (char*)s;
    return str;
}
