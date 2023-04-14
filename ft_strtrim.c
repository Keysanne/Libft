/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:34:58 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/14 10:10:08 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
		if (charset[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (s1[i])
		i++;
	str = malloc(i * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (is_charset(s1[i], (char *)set) == 0)
			str[j++] = s1[i];
		i++;
	}
	str[j] = 0;
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char **argv )
{
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}*/
