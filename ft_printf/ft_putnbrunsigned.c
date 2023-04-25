/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:49:48 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/24 16:08:10 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbrunsigned(unsigned int nb, int *i)
{
	if (nb < 10)
	{
		ft_putchar2_fd(nb + '0', 1);
		(*i)++;
	}
	if (nb >= 10)
	{
		ft_putnbrunsigned(nb / 10, i);
		ft_putnbrunsigned(nb % 10, i);
	}
}
