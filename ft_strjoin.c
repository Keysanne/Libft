/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:56:29 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/14 09:56:58 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i + j] = src[j++];
	dest[i + j] = 0;
	return (dest);
}

int	calcul(int size, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (1);
	while (j < size)
	{
		i += ft_strlen(strs[j++]);
		i += ft_strlen(sep);
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final;
	int		i;

	i = 0;
	final = malloc(calcul(size, strs, sep) * sizeof(char));
	if (!final)
		return (0);
	final[0] = 0;
	if (size == 0)
		return (final);
	while (i < size)
	{
		ft_strcat(final, strs[i]);
		if (i < size - 1)
			ft_strcat(final, sep);
		i++;
	}
	return (final);
}
/*
int	main(int argc, char **argv)
{
	char	sep[] = "...";

	printf("%s\n", ft_strjoin(argc, argv, sep));
	return (0);
}*/
