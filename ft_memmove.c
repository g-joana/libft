/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:16:43 by jgils             #+#    #+#             */
/*   Updated: 2023/10/25 16:14:37 by jgils            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
{
	int	i;
	char	*keepsrc;

	i = 0;
	keepsrc = (char	*)src;
	while (i < n)
	{
		dest[i] = keepsrc[i];
		i++;
	}
	return (dest);
}
