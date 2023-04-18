/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:37:52 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/17 15:06:28 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest2;
	unsigned char	*src2;

	if (!dest && !src)
		return (NULL);
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	i = -1;
	if (dest2 < src2)
	{
		while (++i < n)
			dest2[i] = src2[i];
	}
	else
	{
		while (n > 0)
		{
			dest2[n -1] = src2[n -1];
			n--;
		}
	}
	return (dest);
}
