# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epeters- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/23 17:19:35 by epeters-          #+#    #+#              #
#    Updated: 2021/01/27 11:34:14 by epeters-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	   ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
	   ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	   ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
	   ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c \
	   ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	   ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	   ft_split.c ft_strmapi.c \

BNSSRCS = 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJS = $(SRCS:.c=.o)

BNSOBJS = $(BNSSRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(OBJS) $(BNSOBJS)
	ar rc $(NAME) $(OBJS) $(BNSOBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS) $(BNSOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
