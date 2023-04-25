/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:18:15 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/14 10:02:30 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (src[i])
		i++;
	if (i + 1 < size)
	{
		while (j < i + 1)
		{
			dst[j] = src[j];
			j++;
		}
	}
	else if (size > 0)
	{
		while (j < size - 1)
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = 0;
	}
	return (i);
}
/*
int	main()
{
	char	str[] = "test";
	char	str2[] = "jetest";

	printf("%d\n", ft_strlcpy(str2, str, 4));
	return (0);
}*/
