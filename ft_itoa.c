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

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char	*ft_itoa(int n)
{
	int	slen;
	long	nb;
	int	a;
	int	sig;
	char	*str;
	
	a = 0;
	slen = 1;
	sig = 0;
	nb = n;
	if (n < 0)
	{
		slen++;
		sig++;
	}
	while (n > 9)
	{
		n = n / 10;
		slen++;
	}
	printf("%i\n", slen);
	str = (char *) malloc((slen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[slen] = '\0';
	if (nb < 0)
		nb *= -1;
	while (slen >= 0)
	{
		if (slen == 0 && sig == 1) 
			str[0] = '-';
		else
		{
			a = nb % 10;
			nb = nb / 10;
			str[slen - 1] = (a + '0');
		}	
		slen--;
	}
	printf("%s\n", str);
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(INT_MIN));
	return (0);
}
*/
