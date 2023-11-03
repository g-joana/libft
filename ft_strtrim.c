/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:34:08 by jgils             #+#    #+#             */
/*   Updated: 2023/11/02 16:38:22 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	istart;
	int	iend;
	int	i;
	char		*trimmed;

	i = 0;
	istart = 0;
	iend = ft_strlen(s1) - 1;
	while (s1[istart] && ft_strchr(set, s1[istart]))
		istart++;
	while (iend > istart && ft_strchr(set, s1[iend]))
		iend--;
	trimmed = (char *) malloc((iend - istart + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	while (istart <= iend)
	{
		trimmed[i] = s1[istart];
		i++;
		istart++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
/*
int	main(void)
{
	#include <stdio.h> 
	printf("%s\n", ft_strtrim("888f8fs888", "DJFJHSF888"));
	return (0);
}
*/
