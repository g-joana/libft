/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:24:20 by jgils             #+#    #+#             */
/*   Updated: 2023/10/30 20:03:14 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const char	*cpy1;
	const char	*cpy2;

	i = 0;
	cpy1 = (const char *) s1;
	cpy2 = (const char *) s2;
	while ((cpy1[i] == cpy2[i]) && (i <= n))
		i++;
	return (cpy1[i] - cpy2[i]);
}
