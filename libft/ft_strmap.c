#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    size_t i;
    char *ptr;

    i = 0;
    if (s)
    {
        ptr = ft_memalloc(ft_strlen(s) + 1);
        if (!ptr)
            return NULL;
        while (s[i] != '\0')
        {
            ptr[i] = (*f)(s[i]);
            i++;
        }
        ptr[i] = '\0';
    }
    return (ptr);
}