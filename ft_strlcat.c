#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	i = 0;
	j = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (j < (dstsize - 1) && dstsize > 0)
	{
		while (src[i] && j < (dstsize - 1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	if (j > dstsize)
		j = dstsize;
	return (src_len + j - i);
}
