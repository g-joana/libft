/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:49:15 by jgils             #+#    #+#             */
/*   Updated: 2023/10/23 18:09:05 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//printf
#include <stdio.h>

//isalpha, isdigit, isalnum, isascii, isprint
#include <ctype.h>

//strlen
#include <string.h>

//size_t
#include <stdlib.h>

int ft_isalpha(int c);
int     ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t  ft_strlen(const char *s);

int	main(void)
{
	printf("\n");
	printf("\n");
	printf("------------------------------ft_isalpha\n");
	printf("original: %i\n", isalpha('A'));
	printf("libft:    %i\n", ft_isalpha('A'));
	printf("-\n");
	printf("original: %i\n", isalpha('Z'));
	printf("libft:    %i\n", ft_isalpha('Z'));
	printf("-\n");
	printf("original: %i\n", isalpha('a'));
	printf("libft:    %i\n", ft_isalpha('a'));
	printf("-\n");
	printf("original: %i\n", isalpha('z'));
	printf("libft:    %i\n", ft_isalpha('z'));
	printf("-\n");
	printf("original: %i\n", isalpha('5'));
	printf("libft:    %i\n", ft_isalpha('5'));
	printf("-\n");
	printf("original: %i\n", isalpha('@'));
	printf("libft:    %i\n", ft_isalpha('@'));
	printf("-\n");
	printf("original: %i\n", isalpha('['));
	printf("libft:    %i\n", ft_isalpha('['));
	printf("-\n");
	printf("original: %i\n", isalpha('`'));
	printf("libft:    %i\n", ft_isalpha('`'));
	printf("-----------------------------------------\n");
	printf("------------------------------ft_isdigit\n");
	printf("original: %i\n", isdigit('A'));
	printf("libft:    %i\n", ft_isdigit('A'));
	printf("-\n");
	printf("original: %i\n", isdigit('/'));
	printf("libft:    %i\n", ft_isdigit('/'));
	printf("-\n");
	printf("original: %i\n", isdigit('0'));
	printf("libft:    %i\n", ft_isdigit('0'));
	printf("-\n");
	printf("original: %i\n", isdigit('7'));
	printf("libft:    %i\n", ft_isdigit('7'));
	printf("-\n");
	printf("-----------------------------------------\n");
	printf("------------------------------ft_isalnum\n");
	printf("original: %i\n", isalnum('A'));
	printf("libft:    %i\n", ft_isalnum('A'));
	printf("-\n");
	printf("original: %i\n", isalnum('9'));
	printf("libft:    %i\n", ft_isalnum('9'));
	printf("-\n");
	printf("original: %i\n", isalnum('0'));
	printf("libft:    %i\n", ft_isalnum('0'));
	printf("-\n");
	printf("original: %i\n", isalnum('z'));
	printf("libft:    %i\n", ft_isalnum('z'));
	printf("-\n");
	printf("original: %i\n", isalnum('/'));
	printf("libft:    %i\n", ft_isalnum('/'));
	printf("-\n");
	printf("-----------------------------------------\n");
	printf("------------------------------ft_isascii\n");
	printf("original: %i\n", isascii('f'));
	printf("libft:    %i\n", ft_isascii('f'));
	printf("-\n");
	printf("original: %i\n", isascii('\200'));
	printf("libft:    %i\n", ft_isascii('\200'));
	printf("-\n");
	printf("original: %i\n", isascii(' '));
	printf("libft:    %i\n", ft_isascii(' '));
	printf("-\n");
	printf("original: %i\n", isascii('\0'));
	printf("libft:    %i\n", ft_isascii('\0'));
	printf("-\n");
	printf("-----------------------------------------\n");
	printf("------------------------------ft_isprint\n");
	printf("original: %i\n", isprint('\0'));
	printf("libft:    %i\n", ft_isprint('\0'));
	printf("-\n");
	printf("original: %i\n", isprint('6'));
	printf("libft:    %i\n", ft_isprint('6'));
	printf("-\n");
	printf("original: %i\n", isprint('	'));
	printf("libft:    %i\n", ft_isprint('	'));
	printf("-\n");
	printf("original: %i\n", isprint(' '));
	printf("libft:    %i\n", ft_isprint(' '));
	printf("-\n");
	printf("-----------------------------------------\n");
	printf("------------------------------ft_strlen\n");
	printf("original: %lu\n", strlen("12345678"));
	printf("libft:    %lu\n", ft_strlen("12345678"));
	printf("-\n");
	printf("original: %lu\n", strlen(""));
	printf("libft:    %lu\n", ft_strlen(""));
	printf("-\n");
	printf("original: %lu\n", strlen("\0"));
	printf("libft:    %lu\n", ft_strlen("\0"));
	printf("-\n");
	printf("original: %lu\n", strlen("\200"));
	printf("libft:    %lu\n", ft_strlen("\200"));
	printf("-\n");

}

//ccf ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c main.c
