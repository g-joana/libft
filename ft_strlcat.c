/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:48:22 by jgils             #+#    #+#             */
/*   Updated: 2023/10/18 16:30:29 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dst, const char *src, size_t size)
{
	//size - strlen(dst) - 1
	
	size_t	idst;
	size_t	isrc;

	idst = 0;
	isrc = 0;
	if (!*dst)
		return (0);
	idst = ft_strlen(dst);
	if ((size - 1) <= idst)
		return (size + ft_strlen(src));
	while (src[isrc] != '\0' && (idst + isrc) <(size - 1))
	{
		dst[idst] = src[isrc];
		++idst;
		isrc++;
	}
	idest++;
	dst[idst] = '\0';
	return (ft_strlen(src) + size);
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
