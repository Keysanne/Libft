/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:04:43 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/14 10:06:06 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	max;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len)
	{
		max = 0;
		while (big[i + max] == little[max] && little[max++])
			if (!little[max]
				&& ft_strlen((char *)little) + i <= len)
				return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
int	main(int argc,char **argv)
{
	printf("%s\n",ft_strnstr(argv[1], argv[2], 5));
	return (0);
}*/
