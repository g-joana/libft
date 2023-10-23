/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:33:43 by jgils             #+#    #+#             */
/*   Updated: 2023/10/23 13:12:15 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  *memchr(const void *s, int c, size_t n)
{
	int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (s[i] && i < n)
	{
		if (str[i] == (unsigned char) c)
		{
			str = &str[i];
			return ((void *) str);
		}
		i++;
	}
	return (NULL);
}
