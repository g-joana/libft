/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgils <jgils@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:54:12 by jgils             #+#    #+#             */
/*   Updated: 2023/10/30 20:18:58 by pdrago           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *ascii)
{
	int	i;
	int	sigm;
	int	sigp;
	int	nb;

	i = 0;
	sigm = 0;
	sigp = 0;
	nb = 0;
	while ((ascii[i] >= 8 && ascii[i] <= 13) || (ascii[i] == ' '))
		i++;
	while (ascii[i] == '-' || ascii[i] == '+')
	{
		if (ascii[i] == '-')
			sigm++;
		else if (ascii[i] == '+')
			sigp++;
		i++;
	}
	while ((ascii[i] >= '0') && (ascii[i] <= '9'))
	{
		nb = nb * 10 + (ascii[i] - '0');
		i++;
	}
	if (sigm + sigp > 1)
		return (0);
	else if (sigm)
		nb *= -1;
	return (nb);
}

// int	main()
// {
// #include <stdio.h>
// 	printf("%i", ft_atoi("  -262"));
// }
