#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = ft_strnew(ft_strlen(s1) + 1);
	if (str)
		ft_strcpy(str, s1);
	return (str);
}
