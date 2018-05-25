#include <string.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t len)
{
	unsigned int i;
	unsigned char *d;

	i = 0;
	d = (unsigned char *)s;
	while (i < len)
    {
		d[i] = (unsigned char)c;
        i++;
    }
	s = (void *)d;
	return (s);
}