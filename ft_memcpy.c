#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	void	*ptr_s1;
	size_t	i;

	ptr_s1 = s1;
	if (s1 && s2)
	{
		i = 0;
		while (i < n)
		{
			*(unsigned char *)(s1 + i) = *(unsigned char *)(s2 + i);
			i++;
		}
	}
	return (ptr_s1);
}
