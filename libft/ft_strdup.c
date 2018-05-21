#include <stdlib.h>
#include <string.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
    char *s_dup;

    s_dup = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!s_dup)
        return(NULL);
    for (int i = 0; s[i] != '\0'; i++)
    {
        s_dup[i] = s[i];
    }
    return(s_dup);
}