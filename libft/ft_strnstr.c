#include <string.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    char *ptr;

    ptr = ft_strdup(needle);
    ptr[n] = '\0';
    return(ft_strstr(haystack, ptr));
}
