/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:30:46 by jgils             #+#    #+#             */
/*   Updated: 2023/10/18 16:49:01 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
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
