#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*ptr_s;
	size_t	i;

	ptr_s = s;
	if (s)
	{
		i = 0;
		while (i < n)
		{
			*(unsigned char *)(s + i) = (unsigned char)(c);
			i++;
		}
	}
	return (ptr_s);
}
