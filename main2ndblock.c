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
	printf("**LIBFT TESTS PART TWO**\n");

	printf("\nTesting SUBSTR:\n");
	char	str1[] = "hola y adios!";
	char	*substr;
	printf("Subs from: %s\n", str1);
	substr = ft_substr(str1, 2, 10);
	printf("Result: %s\n", substr);
	printf("Expected: %s%s\n", str1, substr);
	free(substr);
	substr = ft_substr(str1, 15, 10);
	printf("Result: %s\n", substr);
	free(substr);
	substr = ft_substr("", 0, 10);
	printf("Result: %s\n", substr);
	free(substr);

	printf("\nTesting STRJOIN:\n");
	char	*joined;
	joined = ft_strjoin("Prefix", "Sufix");
	printf("Result: %s\n", joined);
	printf("Expected: %s%s\n", "Prefix", "Sufix");
	free(joined);
	joined = ft_strjoin("", "Sufix");
	printf("Result: %s\n", joined);
	printf("Expected: %s%s\n", "", "Sufix");
	free(joined);
	joined = ft_strjoin("Prefix", "");
	printf("Result: %s\n", joined);
	printf("Expected: %s%s\n", "Prefix", "");
	free(joined);


	printf("\nTesting STRTRIM:\n");
	char	*trimmed;
	printf("Trimming *!*&depu!rada!**&*\n");
	trimmed = ft_strtrim("*!*&depu!rada!**&*", "*!&");
	printf("Result: %s\n", trimmed);
	free(trimmed);
	printf("Trimming *!*&!**&*\n");
	trimmed = ft_strtrim("*!*&!**&*", "*!&");
	printf("Result: %s\n", trimmed);
	free(trimmed);
	printf("Trimming *!*&!1**&*\n");
	trimmed = ft_strtrim("*!*&!1**&* ", "* !&");
	printf("Result: %s\n", trimmed);
	free(trimmed);
	printf("Trimming empty string\n");
	trimmed = ft_strtrim("", "* !&");
	printf("Result: %s\n", trimmed);
	free(trimmed);
	printf("Trimming *!*&depu!rada!**&* with empty set\n");
	trimmed = ft_strtrim("*!*&depu!rada!**&*", "");
	printf("Result: %s\n", trimmed);
	free(trimmed);
	
	printf("\nTesting SPLIT:\n");
	char	str[] = ".hello...world.42..end.";
	char	str0[] = "try and  split this    one!";
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
	i = 0;
	c = ' ';
	printf("Splitting: ->%s<- with delimeter: ->%c<-\n", str0, c);
	tab = ft_split(str0, c);
	while (tab[i])
	{
		printf("Word %d is: %s\n", i, tab[i]);
		i++;
	}
	if (tab[i] == 0)
		printf("Last index is zero\n");
	free(tab);
	
	printf("\nTesting ITOA:\n");
	int		n;
	char	*intstr;
	n = 42;
	intstr = ft_itoa(n);
	printf("%d -> %s\n", n, intstr);
	free(intstr);
	n = -24;
	intstr = ft_itoa(n);
	printf("%d -> %s\n", n, intstr);
	free(intstr);
	n = -123456789;
	intstr = ft_itoa(n);
	printf("%d -> %s\n", n, intstr);
	free(intstr);

	printf("\nTesting STRMAPI:\n");
	char	str2[] = "JJJJJJJJJJJJJJ";
	char	(*ptrf)(unsigned int, char);

	ptrf = &fi;
	printf("Applying fi to: %s\n", str2);
	substr = ft_strmapi(str2, ptrf);
	printf("%s becomes %s\n", str2, substr);
	free(substr);
	printf("Applying fi to empty string: %s\n", "");
	substr = ft_strmapi("", ptrf);
	printf("%s becomes %s\n", "", substr);
	free(substr);
	ptrf = NULL;
	printf("Applying empty ptr to: %s\n", str2);
	substr = ft_strmapi(str2, ptrf);
	printf("%s becomes %s\n", str2, substr);
	free(substr);

	printf("\nTesting PUT_FDs:\n");
	int		fd;
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

	return (0);
}
