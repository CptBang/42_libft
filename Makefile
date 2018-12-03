# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mschroed <mschroed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 11:10:39 by mschroed          #+#    #+#              #
#    Updated: 2018/12/03 13:04:31 by mschroed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memalloc.c \
ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c \
ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c \
ft_striter.c ft_striteri.c ft_strjoin.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c \
ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strsub.c \
ft_tolower.c ft_toupper.c ft_strlcat.c ft_isascii.c ft_strtrim.c ft_strtrim_c.c ft_strsplit.c \
ft_wc.c ft_itoa.c ft_numlen.c ft_lstnew.c ft_lstadd.c ft_lstmap.c ft_lstdelone.c \
ft_lstdel.c ft_lstiter.c ft_isupper.c ft_islower.c ft_free2d.c

OBJ = *.o

INC = includes

all: $(NAME)

$(NAME): 
	gcc -c -g -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib libft.a

test:	all
	gcc -g $(NAME) test.c 
	./a.out

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME)