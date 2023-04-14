/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:11:36 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/14 10:12:22 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc ((len - start) * sizeof(char));
	if (!str)
		return (NULL);
	while (start <= len)
		str[i++] = s[start++];
	return (str);
}
/*
int	main()
{
	printf("%s\n", ft_substr("bonjour les amis du futur", 12, 25));
	return (0);
}*/
