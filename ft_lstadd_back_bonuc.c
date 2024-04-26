/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonuc.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:09:50 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/26 16:41:18 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if ((*lst) == NULL)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{
		while ((*lst)->next != NULL)
		{
			(*lst) = (*lst)->next;
		}
		(*lst)->next = new;
		new->next = NULL;
	}
}g
