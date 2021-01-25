#include "libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char	fi(unsigned int index, char c)
{
	if (index % 2 == 0)
		return (c + 1);
	else if (index % 3 == 0)
		return ('$');
	else
		return (c);
}

int main(void)
{
	int		fd;
	char	str1[] = "hola y adios!";
	char	*substr;
	char	*joined;
	char	*trimmed;
	char	str[] = ".hola...mundo.42..final.";
	char	c;
	char	**tab;
	int		i;
	char	str2[] = "JJJJJJJJJJJJJJ";
	
	printf("Subs from: %s\n", str1);
	substr = ft_substr(str1, 2, 10);
	printf("Result: %s\n", substr);
	printf("Expected: %s%s\n", str1, substr);
	joined = ft_strjoin(str1, substr);
	printf("Result: %s\n", joined);
	free(substr);
	free(joined);
	printf("Trimming *!*&depu!rada!**&*\n");
	trimmed = ft_strtrim("*!*&depu!rada!**&*", "*!&");
	printf("Result: %s\n", trimmed);
	free(trimmed);
	printf("Trimming *!*&!**&*\n");
	trimmed = ft_strtrim("*!*&!**&*", "*!&");
	printf("Result: %s\n", trimmed);
	free(trimmed);
	printf("Trimming *!*&!1**&*\n");
	trimmed = ft_strtrim("  *!*&!1**&*  ", "* !&");
	printf("Result: %s\n", trimmed);
	free(trimmed);
	fd = open("testfile", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	printf("Now writing a+nl to file\n");
	ft_putchar_fd('a', fd);
	ft_putchar_fd('\n', fd);
	printf("Now writing 'hello' to file\n");
	ft_putstr_fd("hello", fd);
	printf("Now writing ', world!+nl' to file\n");
	ft_putendl_fd(", world!", fd);
	printf("Now writing -42 to file\n");
	ft_putnbr_fd(-42, fd);
	close(fd);	
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
	printf("Applying fi to: %s\n", str2);
	substr = ft_strmapi(str2, &fi);
	printf("%s becomes %s\n", str2, substr);
	free(substr);
}
