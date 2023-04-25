/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbradress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:48:59 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/24 16:07:18 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbradress(unsigned long n, char *base, int *i)
{
	unsigned long	nb;

	nb = n;
	if (nb < 16)
	{
		ft_putchar2_fd(base[nb], 1);
		(*i)++;
	}
	if (nb >= 16)
	{
		ft_putnbradress(nb / 16, base, i);
		ft_putnbradress(nb % 16, base, i);
	}
}
