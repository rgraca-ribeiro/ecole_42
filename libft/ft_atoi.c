#include "libft.h"

int ft_atoi(const char *str)
{
	int sign;
	int nbr;

	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' ||
			*str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	for (nbr = 0; ft_isdigit((int)*str); str++)
		nbr = nbr * 10 + *str - '0';
	return (sign * nbr);
}