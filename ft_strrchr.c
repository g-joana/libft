/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:16:56 by jgils             #+#    #+#             */
/*   Updated: 2023/10/18 17:21:39 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{	
	char	*ptr;
	char	*keepptr;

	ptr = (char *)s;
	keepptr = ptr;
	while (*ptr++)
	{
		if (*ptr == c)
			keepptr = ptr;
	}
	if (*ptr++ == '\0')
		keepptr = NULL;
	return (keepptr);
}

int	main(void)
{
}
