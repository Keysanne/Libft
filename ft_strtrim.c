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

int	is_charset(char c, const char *charset)
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
	int		k;
	char	*str;

	i = 0;
	j = 0;
	while (s1[i++])
		j++;
	str = malloc(j * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (is_charset(s1[i], set) == 1)
		i++;
	while (is_charset(s1[j - 1], set) == 1)
		j--;
	k = 0;
	while (i < j)
		str[k++] = s1[i++];
	str[k] = 0;
	return (str);
}
/*
int	main(int argc, char **argv )
{
	printf("%s\n", ft_strtrim("o.,oo,.o-bon.j,our-o.,..,.o", "o.,"));
	return (0);
}*/
