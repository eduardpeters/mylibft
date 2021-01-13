#include "libft.h"

int	ft_atoi(const char *str)
{
	int nbr;
	int sign;

	nbr = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += (int)(*str - '0');
		str++;
	}
	return (nbr * sign);
}
