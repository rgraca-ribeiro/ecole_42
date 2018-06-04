#include <stdlib.h>
#include <string.h>
#include <string.h>
#include "libft.h"

char *ft_itoa(int n)
{
    char    *str;
    char    *ptr;
    int     temp;
    int     count;

    temp = 1;
    if (n == 0)
    {
        str = ft_strnew(1);
        str[0] = '0';
        return (str);
    }
    for (count = 0; (n / 10) > temp; count++)
        temp *= 10;
    ptr = ft_strnew(count);
    if (!ptr)
        return (NULL);
    str = ft_strnew(count);
    if (!str)
        return (NULL);
    temp = 1;
    for (count = 0; n > 0; count++)
    {
        temp = n % 10;
        ptr[count] = temp + 48;
        n /= 10;
    }
    temp = 0;
    for (temp = 0; count > 0; temp++)
    {
        str[temp] = ptr[count - 1];
        count--;
    }
    free(ptr);
    ptr = NULL;
    return (str);
}
