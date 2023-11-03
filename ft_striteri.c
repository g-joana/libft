/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:29:42 by jgils             #+#    #+#             */
/*   Updated: 2023/11/02 18:17:18 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "libft.h"
/*
void	ft_toupper(unsigned int i, char *s )
{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}
/*
int	main(void)
{
	char	s[20] = "alooooooooooo";
	ft_striteri(s, &ft_toupper);
	printf("%s\n", s);
}
*/
