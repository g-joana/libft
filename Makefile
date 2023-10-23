# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgils <jgils@student.42.rio>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 13:12:54 by jgils             #+#    #+#              #
#    Updated: 2023/10/23 14:44:14 by jgils            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES_C = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c
FILES_O = $(FILES_C:.c=.o)

all: $(NAME)

%.o: %.c %.h
	cc -Wall -Wextra -Werror -c $<
	
$(NAME): $(FILES_O)
	ar -rc libft.a

exec: $(FILES_C)
	cc -Wall -Wextra -Werror -o -c exec $(FILES_C)

clean:
	rm -rf $(FILES_O)

fclean: clean
	rm -rf $(NAME)

re: fclean all
