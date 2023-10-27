/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:30:46 by jgils             #+#    #+#             */
/*   Updated: 2023/10/26 18:36:04 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{	
	char	*ptr;
	ptr = (char *)s;
	while (*ptr++)
	{
		if (*ptr == c)
			return (ptr);
	}
	ptr = NULL;
	return (ptr);
}

int	main(void)
{
}
