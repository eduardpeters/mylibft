#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	int fd;

	fd = open("testfile", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	ft_putstr("Now writing a+nl to file\n");
	ft_putchar_fd('a', fd);
	ft_putchar_fd('\n', fd);
	ft_putstr("Now writing 'hello' to file\n");
	ft_putstr_fd("hello", fd);
	ft_putstr("Now writing ', world!+nl' to file\n");
	ft_putendl_fd(", world!", fd);
	ft_putstr("Now writing -42 to file\n");
	ft_putnbr_fd(-42, fd);
	close(fd);
}
