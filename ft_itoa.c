/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:58:39 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/13 17:52:33 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nb)
{
	int		i;
	int		max;
	char	*str;

	max = 1000000000;
	i = 0;
	str = malloc(11 * sizeof(char));
	if (nb < 0)
	{
		if (nb == -2147483648)
			return ("-2147483648");
		str[i] = '-';
		i++;
	}
	while (nb / max == 0)
		max /= 10;
	while (max >= 1)
	{
		str[i] = (nb / max) + '0';
		nb -= (nb / max) * max;
		max /= 10;
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int	main()
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}*/
