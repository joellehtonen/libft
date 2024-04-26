/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:21:51 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/26 15:16:14 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del_content(void *content)
{
	free(content);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		del((*lst)->content);
		free(*lst);
		(*lst) = (*lst)->next;
	}
	*lst = NULL;
}
