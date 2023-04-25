/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:40:31 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/24 16:07:30 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbrbase_fd(int n, int fd, char *base, int *i)
{
	unsigned int	nb;

	nb = n;
	if (nb < 16)
	{
		ft_putchar2_fd(base[nb], fd);
		(*i)++;
	}
	if (nb >= 16)
	{
		ft_putnbrbase_fd(nb / 16, fd, base, i);
		ft_putnbrbase_fd(nb % 16, fd, base, i);
	}
}
