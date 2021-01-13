#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	u_nbr;

	if (n < 0)
	{
		u_nbr = (unsigned int)(n * -1);
		ft_putchar('-');
	}
	else
		u_nbr = (unsigned int)(n);
	if (u_nbr > 9)
		ft_putnbr(u_nbr / 10);
	ft_putchar('0' + u_nbr % 10);
}
