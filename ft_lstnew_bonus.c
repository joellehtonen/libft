/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:49:32 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/02 15:35:54 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int main(void)
{
	int *data = malloc(sizeof(int));
    *data = 42;
    t_list *node = ft_lstnew(data);

    if (node != NULL) {
        printf("Test case: Create a new list node with non-empty content\n");
        printf("Result: Node created successfully.\n");
    } else {
        printf("Test case: Create a new list node with non-empty content\n");
        printf("Result: Failed to create node.\n");
    }
	free(node->content);
    free(node);
}
