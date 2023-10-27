/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:34:08 by jgils             #+#    #+#             */
/*   Updated: 2023/10/26 18:45:06 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <stdlib.h>

char    *ft_strchr(const char *s, int c)
{
        char    *ptr;
        ptr = (char *)s;
        while (*ptr++)
        {
                if (*ptr == c)
                        return (ptr);
        }
        ptr = NULL;
        return (ptr);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(*s++)
		i++;
	return (i);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	int	i;
	char		*trimmed;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	trimmed = malloc ((end - start) + 1 * sizeof(char));
	if (!trimmed)
		return (NULL);
	while (start <= end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("alou321", "4312"));
}
*/
