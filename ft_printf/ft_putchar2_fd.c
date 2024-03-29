/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar2_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:23:33 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/24 16:07:03 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putchar2_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
/*
int	main()
{
	ft_putchar_fd('X', 1);
	return (0);
}*/
