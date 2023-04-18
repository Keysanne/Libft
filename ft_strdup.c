/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:52:53 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/17 14:09:29 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*final;
	int		i;

	i = 0;
	while (s[i])
		i++;
	final = malloc (i * sizeof(char));
	if (!final)
		return (NULL);
	i = 0;
	while (s[i])
	{
		final[i] = s[i];
		i++;
	}
	final[i] = 0;
	return (final);
}
/*
int	main()
{
	char	str[] = "test";
	printf("%s\n", ft_strdup(str));
	return (0);
}*/
