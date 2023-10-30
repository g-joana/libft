/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:30:07 by jgils             #+#    #+#             */
/*   Updated: 2023/10/30 19:35:06 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ibig;
	size_t	ilit;
	char	*ptr;

	ibig = 0;
	ilit = 0;
	ptr = (char *)big;
	while (big[ibig] && ibig <= len)
	{
		if (big[ibig] == little[0])
			ptr = &ptr[ibig];
		while (big[ibig] == little[ilit])
		{
			ibig++;
			ilit++;
		}
		if (ilit == len)
			break;
		else
		{
			ibig -= ilit;
			ilit = 0;
		}
		ibig++;
	}
	if ((ilit != len) && (little[0] != '\0'))
		ptr = NULL;
	return (ptr);
}
/*
int	main(void)
{
	#include <stdio.h>
	printf("%s", ft_strnstr("acha aqui po", "", 8));
	return (0);
}
*/
