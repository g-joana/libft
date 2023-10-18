/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:16:43 by jgils             #+#    #+#             */
/*   Updated: 2023/10/18 20:31:06 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
{
	int	i;
	const void	keepsrc;

	i = 0;
	keepsrc = src;
	while (src[i] && i < n)
	{
		dest[i] = keepsrc[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
