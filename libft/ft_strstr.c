#include <string.h>
#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    if (!*needle || *needle == '\0')
        return ((char*)haystack);
    while (*haystack)
    {
        for (int i = 0; haystack[i] == needle[i]; i++)
        {
            if (needle[i + 1] == '\0')
                return ((char*)haystack);
        }
        haystack++;
    }
    return (NULL);
}