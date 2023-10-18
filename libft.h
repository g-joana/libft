/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:18:03 by jgils             #+#    #+#             */
/*   Updated: 2023/10/18 16:28:32 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H


//int isalpha(int c);
//int isdigit(int c);
//int isalnum(int c);
//int isascii(int c);
//int isprint(int c);

//size_t	strlen(const char *s);

void	*memset(void *s, int c, size_t n);

void	bzero(void *s, size_t n);

void	*memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);

//size_t	strlcpy(char *dst, const char *src, size_t size);
size_t	strlcat(char *dst, const char *src, size_t size);

//int	toupper(int c);
//int	tolower(int c);

char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);

//int	strncmp(const char *s1, const char *s2, size_t n);

int	memcmp(const void *s1, const void *s2, size_t n);

//char    *ft_strnstr(const char *big, const char *little, size_t len);

//int	atoi(const char *nptr);

#endif
