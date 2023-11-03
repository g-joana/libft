/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:37:16 by jgils             #+#    #+#             */
/*   Updated: 2023/11/03 11:27:50 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	id;
	unsigned int	is;
	char	*src_cpy;
	char	*dst_cpy;

	src_cpy = (char *) src;
	dst_cpy = dst;
	id = ft_strlen(dst);
	if (id >= size)
		return (ft_strlen(dst_cpy) + ft_strlen(src_cpy));
	id++;
	is = 0;
	while (src[is] && id + 1 < (unsigned int) size)
	{
		dst[id] = src[is];
		id++;
		is++;
	}
	if (!(ft_strlen(dst_cpy) >= size))
		dst[id + 1] = '\0';
	return (ft_strlen(dst_cpy) + ft_strlen(src_cpy));
}
/*
int	main(void)
{
	#include <stdio.h>

	size_t	size;
	char	dst[8] = "concat ";
	const char	src[20] = "até aqui-menos esse";

	//dst = "concat ";
	//src = "até aqui-menos esse";
	size = 15;

	printf("retorno: %li -> size deveria ser desse tamanho para concatenar tudo\n\ndst: %s", ft_strlcat(dst, src, size), dst);
}
*/
