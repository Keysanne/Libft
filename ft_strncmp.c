/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:04:06 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/14 10:17:16 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include <string.h>
int     main(int argc, char **argv)
{
        printf("%s\n", argv[1]);
        printf("%s\n", argv[2]);
        printf("%d\n", ft_strncmp(argv[1], argv[2], 4));
        printf("%d\n", strncmp(argv[1], argv[2], 4));
        return (0);
}*/
