#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str[] = ".hola...mundo.42..final.";
	char	c;
	char	**tab;
	int		i;

	i = 0;
	c = '.';
	printf("Splitting: ->%s<- with delimeter: ->%c<-\n", str, c);
	tab = ft_split(str, c);
	while (tab[i])
	{
		printf("Word %d is: %s\n", i, tab[i]);
		i++;
	}
	if (tab[i] == 0)
		printf("Last index is zero\n");
	free(tab);
}
