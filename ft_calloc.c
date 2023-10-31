/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:18:03 by jgils             #+#    #+#             */
/*   Updated: 2023/10/31 11:43:13 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*calloc;
	size_t	i;

	i = 0;
	calloc = (char *) malloc(nmemb * size);
	while (nmemb--)
	{
		calloc[i] = 0;
		i++;
	}
	return ((void *) calloc);
}
