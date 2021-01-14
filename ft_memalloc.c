#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	char	*ptr_mem;
	size_t	i;

	if (!(mem = malloc(size)))
		return (NULL);
	ptr_mem = mem;
	i = 0;
	while (i < size)
	{
		ptr_mem[i] = 0;
		i++;
	}
	return (mem);
}
