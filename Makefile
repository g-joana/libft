# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgils <jgils@student.42.rio>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 13:12:54 by jgils             #+#    #+#              #
#    Updated: 2023/10/30 20:39:09 by pdrago           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
FLAGS = -Wall -Wextra -Werror -c
NAME = libft.a
FILES_C = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_striteri.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
FILES_O = $(FILES_C:.c=.o)

all: $(NAME)

%.o: %.c
	cc $(FLAGS) $<

$(NAME): $(FILES_O)
	ar -rc libft.a $(FILES_O)

so:
	cc -nostartfiles -fPIC $(FLAGS) $(FILES_C)
	gcc -nostartfiles -shared -o libft.so $(FILES_O)

exec: $(FILES_C)
	cc -Wall -Wextra -Werror -o -c exec $(FILES_C)

clean:
	rm -rf $(FILES_O)

fclean: clean
	rm -rf $(NAME)

re: fclean all
