/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jou <jgils@student.42.rio>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:45:56 by jou               #+#    #+#             */
/*   Updated: 2023/10/31 11:19:43 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int	i;
	int	is2;

	i = 0;
	is2 = 0;
	newstr = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!newstr)
		return NULL;
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[is2])
	{
		newstr[i] = s2[is2];
		s2++;
		i++;
	}
	newstr[i] = '\0';
	return(newstr);
}

int	main(void)
{
	printf("%s\n", ft_strjoin("ddddd", ""));
	return (0);
}
