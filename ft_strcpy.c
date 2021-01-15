#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	char	*ptr_s1;

	ptr_s1 = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (ptr_s1);
}
