/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:30:07 by jgils             #+#    #+#             */
/*   Updated: 2023/11/02 18:01:00 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ibig;
	size_t	ilit;
	char	*ptr;

	ibig = 0;
	ilit = 0;
	ptr = (char *) big;
	while (big[ibig] && ibig < len)
	{
		if (big[ibig] == little[ilit])
			ptr = &ptr[ibig];
		while (big[ibig] == little[ilit] && ibig < len)
		{
			ibig++;
			ilit++;
		}
		if (little[ilit] == '\0')
			break;
		ibig -= ilit;
		ilit = 0;
		ibig++;
	}
	if ((little[ilit] != '\0') && (little[0] != '\0'))
		ptr = NULL;
	return (ptr);
}
