/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrago <pdrago@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:03:43 by pdrago            #+#    #+#             */
/*   Updated: 2023/10/30 20:28:40 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_ilen(int n)
{
	int	len;

	len = 0;

	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n /10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int	len;
	
	nb = n;
	len = get_ilen(n);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (nb != 0)
	{
		len--;
		str[len] = ((nb % 10) + '0');
		nb = nb /10;
	}
	return (str);
}
