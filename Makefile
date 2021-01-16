NAME = libft.a

SRCS =	ft_putchar.c \
	ft_putendl.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_isprint.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_atoi.c \
	ft_memalloc.c \
	ft_memdel.c \
	ft_strclr.c \
	ft_strdel.c \
	ft_striter.c \
	ft_strnew.c \
	ft_striteri.c \
	ft_strlen.c \
	ft_strcpy.c \
	ft_strdup.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \

OBJS = $(SRCS:.c=.o)

HDRS = libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror -I $(HDRS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
