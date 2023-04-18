/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:23:20 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/17 15:39:21 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && size && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = 0;
	j = 0;
	while (src[j])
		j++;
	return (i + j);
}
/*
int	main(int argc, char **argv)
{
	printf("%ld\n", ft_strlcat(argv[1], argv[2], 2));
	return (0);
}*/
