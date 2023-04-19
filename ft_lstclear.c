/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:33:40 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/19 10:33:41 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list	*p;

	p = *lst;
	while(p)
	{
		ft_lstdelone(p, del);
		p = p->next;
	}
	*lst = NULL;
}
