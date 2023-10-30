/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:16:43 by jgils             #+#    #+#             */
/*   Updated: 2023/10/30 20:14:28 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dcopy;
	char	*scopy;

	i = 0;

	dcopy = (char *) dest;
	scopy = (char *) src;
	while (i < n)
	{
		dcopy[i] = scopy[i];
		i++;
	}
	return (dcopy);
}
