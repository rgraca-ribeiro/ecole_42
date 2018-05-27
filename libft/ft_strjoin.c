#include <string.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int     len_s1 = ft_strlen(s1);
    int     len_s2 = ft_strlen(s2);
    char    *ptr;

    ptr = ft_strnew((ft_strlen(s1) + ft_strlen(s2)));
    if (!ptr)
        return (NULL);
    ft_strcpy(ptr, s1);
    ft_strcat(ptr, s2);
    return (ptr);
}
