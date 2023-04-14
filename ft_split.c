/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:56:24 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/14 12:59:42 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**gd_malloc(const char *str, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c && str[i - 1] != c)
			j++;
		i++;
	}
	tab = malloc((j + 1) * sizeof(char *));
	return (tab);
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	tab = gd_malloc(str, c);
	while (str[i])
	{
		k = 0;
		tab[j] = malloc((ft_strlen(str) + 1) * sizeof(char));
		while (str[i] != c)
			tab[j][k++] = str[i++];
		while (str[i] == c)
		{
			if (str[i - 1] != c)
				j++;
			i++;
		}
	}
	tab[j++] = 0;
	return (tab);
}

/*
int	main(int argc, char **argv)
{
	char	**tab;
	int	i;

	i = 0;
	tab = ft_split(argv[1], '.');
	while (tab[i])
		printf("%s\n", tab[i++]);
	free(tab);
	return (0);
}*/
