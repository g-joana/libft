/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:49:15 by jgils             #+#    #+#             */
/*   Updated: 2023/10/26 19:11:05 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
//printf
#include <stdio.h>

//isalpha, isdigit, isalnum, isascii, isprint
#include <ctype.h>

//strlen, memset, memcpy
#include <string.h>

//size_t
#include <stdlib.h>

//bzero
#include <strings.h>

//int	ft_isalpha(int c);
//int   ft_isdigit(int c);
//int	ft_isalnum(int c);
//int	ft_isascii(int c);
//int	ft_isprint(int c);
//size_t  ft_strlen(const char *s);
//void    *ft_memset(void *s, int c, size_t n);
//void  ft_bzero(void *s, size_t n);
//void  *ft_memcpy(void *dest, const void *src, size_t n);
// 	memcpy: usar memmove quando strings se sobreporem
// 	checar retornos das mem
//void *memmove(void *dest, const void *src, size_t n);
size_t        ft_strlcpy(char *dst, const char *src, size_t size);

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
	printf("-----------------------------------------\n");
	printf("------------------------------ft_memset\n");
	char str[8] = "12345678";
	char strlib[8] = "12345678";

	memset(str, 'c', 5);
	ft_memset(strlib, 'c', 5);
	printf("original: %s\n", str);
	printf("libft:    %s\n", strlib);
	printf("-\n");
	printf("-----------------------------------------\n");
	printf("------------------------------ft_bzero\n");
	char str[8] = "12345678";
	char strlib[8] = "12345678";

	bzero(str, 5);
	ft_bzero(strlib, 5);
	printf("original: %s\n", str);
	printf("libft:    %s\n", strlib);
	printf("-\n");
	printf("-----------------------------------------\n");
	printf("------------------------------ft_memcpy\n");
	char dest[9] = "destino+";
	char destlib[9] = "destino+";
	const char src[13] = "cópia-ignora";
	const char srclib[13] = "cópia-ignora";

	memcpy(dest, src, 5);
	ft_memcpy(destlib, srclib, 5);
	printf("original: %s\n", memcpy(dest, src, 5));
	printf("libft:    %s\n", ft_memcpy(destlib, srclib, 5));
	printf("-\n");
	printf("original: %s\n", dest);
	printf("libft:    %s\n", destlib);
	printf("-\n");
	printf("-----------------------------------------\n");
	printf("------------------------------ft_memmove\n");
	char dest[9] = "destino+";
	char destlib[9] = "destino+";
	const char src[13] = "cópia-ignora";
	const char srclib[13] = "cópia-ignora";

	memcpy(dest, src, 5);
	ft_memcpy(destlib, srclib, 5);
	printf("original: %s\n", memcpy(dest, src, 5));
	printf("libft:    %s\n", ft_memcpy(destlib, srclib, 5));
	printf("-\n");
	printf("original: %s\n", dest);
	printf("libft:    %s\n", destlib);
	printf("-\n");
	
}
*/
