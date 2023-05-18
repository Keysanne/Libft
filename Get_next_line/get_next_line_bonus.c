/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:46:02 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/04 12:03:42 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*get_next_line_bonus(int fd)
{
	static t_gnl	*reste[FD_LIMITS];
	char			*ligne;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, &ligne, 0) < 0)
		return (NULL);
	ligne = NULL;
	lire_et_stock(fd, &reste[fd]);
	if (reste[fd] == NULL)
		return (NULL);
	get_ligne(&ligne, reste[fd]);
	clean_reste(&reste[fd]);
	if (!ligne[0])
	{
		free_reste(reste[fd]);
		reste[fd] = NULL;
		free(ligne);
		return (NULL);
	}
	return (ligne);
}

void	lire_et_stock(int fd, t_gnl **reste)
{
	char	*lu;
	int		ret;

	ret = 1;
	while (!is_valid(*reste) && ret != 0)
	{
		lu = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!lu)
			return ;
		ret = read(fd, lu, BUFFER_SIZE);
		if ((*reste == NULL && ret == 0) || ret == -1)
		{
			free(lu);
			return ;
		}
		lu[ret] = '\0';
		add_reste(reste, lu, ret);
		free (lu);
	}
}

void	add_reste(t_gnl **reste, char *lu, int ret)
{
	t_gnl	*add;
	t_gnl	*last;
	int		i;

	add = malloc (sizeof(t_list));
	if (!add)
		return ;
	add->next = NULL;
	add->content = malloc ((ret + 1) * sizeof(char));
	if (!add->content)
		return ;
	i = 0;
	while (lu[i] && i < ret)
	{
		add->content[i] = lu[i];
		i++;
	}
	add->content[i] = '\0';
	if (*reste == NULL)
	{
		*reste = add;
		return ;
	}
	last = get_last(*reste);
	last->next = add;
}

void	get_ligne(char **ligne, t_gnl *reste)
{
	int	i;
	int	j;

	if (reste == NULL)
		return ;
	taille_ligne(reste, ligne);
	if (!ligne)
		return ;
	j = 0;
	while (reste)
	{
		i = 0;
		while (reste->content[i])
		{
			if (reste->content[i] == '\n')
			{
				(*ligne)[j++] = reste->content[i++];
				break ;
			}
			(*ligne)[j++] = reste->content[i++];
		}
		reste = reste->next;
	}
	(*ligne)[j] = '\0';
}

void	clean_reste(t_gnl **reste)
{
	t_gnl	*last;
	t_gnl	*clean;
	int		i;
	int		j;

	clean = malloc(sizeof(t_list));
	if (!reste || !clean)
		return ;
	clean->next = NULL;
	last = get_last(*reste);
	i = 0;
	while (last->content[i] && last->content[i] != '\n')
		i++;
	if (last->content && last->content[i] == '\n')
		i++;
	clean->content = malloc((ft_strlen(last->content) - i + 1) * sizeof(char));
	if (!clean)
		return ;
	j = 0;
	while (last->content[i])
		clean->content[j++] = last->content[i++];
	clean->content[j] = '\0';
	free_reste(*reste);
	*reste = clean;
}
