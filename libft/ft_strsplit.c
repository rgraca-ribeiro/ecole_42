#include <string.h>
#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
    char **ptr;
    size_t start = 0;
    int i = 0;

    if (!*s)
        return (NULL);
    
    while (*s != '\0')
    {
        while (*s == c)
            s++;
        while (s[start] != c)
        {
            if (s[start] == '\0')
                return (ptr);
            start++;
        }
        // printf("start: %d\n", start);
        printf("String: %s\n", ft_strsub(s, 0, start));
        // ptr[i] = ft_strsub(s, 0, start);
        // i++;
        while (start > 0)
        {
            s++;
            start--;
        }
    }
    return (ptr);
}