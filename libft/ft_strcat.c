#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
    int i = ft_strlen(dest);
    int j;

    for (j = 0; src[j]; j++)
    {
        dest[i + j] = src[j];
    }
    dest[i + j] = '\0';
    return(dest);
}