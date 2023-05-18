/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:46:09 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/04 12:04:00 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	is_valid(t_gnl *reste)
{
	int		i;
	t_gnl	*verif;

	if (reste == NULL)
		return (0);
	verif = get_last(reste);
	i = 0;
	while (verif->content[i])
	{
		if (verif->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

t_gnl	*get_last(t_gnl *reste)
{
	t_gnl	*last;

	last = reste;
	while (last && last->next)
		last = last->next;
	return (last);
}

void	taille_ligne(t_gnl *reste, char **ligne)
{
	int	i;
	int	cpt;

	cpt = 0;
	while (reste)
	{
		i = 0;
		while (reste->content[i])
		{
			if (reste->content[i] == '\n')
			{
				cpt++;
				break ;
			}
			cpt++;
			i++;
		}
		reste = reste->next;
	}
	*ligne = malloc ((cpt + 1) * sizeof(char));
}

void	free_reste(t_gnl *reste)
{
	t_gnl	*swap;
	t_gnl	*next;

	swap = reste;
	while (swap)
	{
		free(swap->content);
		next = swap->next;
		free(swap);
		swap = next;
	}
}
