/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:47:57 by jgils             #+#    #+#             */
/*   Updated: 2023/10/26 19:29:02 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(*s++)
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char	*dest;

	i = 0;
	len = ft_strlen(s);
	dest = (char *) malloc (len + 1 * sizeof(char));
	if (!dest)
		return (NULL);
	while (len--)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	printf("%s\n", ft_strmapi("alou carai", ft_toupper()));
	
}
