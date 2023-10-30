/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:33:43 by jgils             #+#    #+#             */
/*   Updated: 2023/10/30 19:58:19 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (str[i] && i < n)
	{
		if (str[i] == (unsigned char) c)
		{
			str = &str[i];
			return ((void *) str);
		}
		i++;
	}
	return (NULL);
}
