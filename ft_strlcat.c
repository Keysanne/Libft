/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:23:20 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/14 09:57:40 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dst[(size - 1) + j] = src[j];
		j++;
	}
	dst[(size - 1) + j] = 0;
	j = 0;
	while (dst[j])
		j++;
	return (j);
}
/*
int	main(int argc, char **argv)
{
	printf("%ld\n", ft_strlcat(argv[1], argv[2], 7));
	return (0);
}*/
