#include "libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(void)
{
	int		fd;
	char	str1[] = "hola y adios!";
	char	*substr;
	char	*joined;
	char	*trimmed;
	
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
}
