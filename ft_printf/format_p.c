/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:01:26 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/24 16:04:46 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	adresse(unsigned long ptr)
{
	int	i;

	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	i = 2;
	ft_putnbradress(ptr, "0123456789abcdef", &i);
	return (i);
}

int	format_p(va_list stk)
{
	return (adresse((unsigned long)va_arg(stk, void *)));
}
