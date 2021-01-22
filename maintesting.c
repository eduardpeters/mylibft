#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "a esta cadena";
	char	dest[17];
	char	dest2[17];

	printf("Cadena: %s\n", str);
	printf("Mide: %zu\n", ft_strlen(str));
	dest[0] = 'H';
	dest[1] = 'o';
	dest[2] = 'l';
	dest[3] = '\0';
	dest2[0] = 'H';
	dest2[1] = 'o';
	dest2[2] = 'l';
	dest2[3] = '\0';
	printf("Return ft_strlcat: %zu\n", ft_strlcat(dest, str, 10));
	printf("Result ft_strlcat: %s\n", dest);
	printf("Mide: %zu\n", ft_strlen(dest));
	printf("Return strlcat: %zu\n", strlcat(dest2, str, 10));
	printf("Result strlcat: %s\n", dest2);
	printf("Mide: %zu\n", ft_strlen(dest2));
}
