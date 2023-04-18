/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:56:29 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/17 10:37:59 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	char	*final;

	final = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!final)
		return (NULL);
	j = -1;
	while (s1[++j])
		final[j] = s1[j];
	j = -1;
	while (s2[++j])
		final[ft_strlen(s1) + j] = s2[j];
	final[ft_strlen(s1) + j] = 0;
	return (final);
}
/*
int	main(int argc, char **argv)
{
	char const	s1[] = "je";
	char const	s2[] = " testghjkgu feklfgwq;gjrlkeg rlgnreklg wqggl qwgkl yo";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
