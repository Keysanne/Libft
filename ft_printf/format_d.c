/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:13:38 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/24 16:04:37 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	format_d(int nb)
{
	char	*str;
	int		i;

	str = ft_itoa(nb);
	ft_putnbr_fd(nb, 1);
	i = ft_strlen(str);
	free(str);
	return (i);
}
