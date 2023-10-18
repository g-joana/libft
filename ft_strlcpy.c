/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:13:05 by jgils             #+#    #+#             */
/*   Updated: 2023/10/18 14:48:04 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	//dst copies src until size + '\0'
	//strlcpy counts and returns the length of the entire source string
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = 0;
	if (!size)
		return (0);
	while (src[i++])
		srclen++;
	i = 0;
	while (dst[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

int	main(void)
{
	#include <stdio.h>

	char	*dst;
	const char	*src;
	size_t	size;

	dst[] = 
	src[] = 
	size = 

	printf("return len: %i\n dst: %s", strlcpy(dst, src, size));
}	
