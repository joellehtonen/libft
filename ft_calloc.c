/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:41:22 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/19 16:32:41 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*pointer;
	size_t			remaining_memory;
	size_t			index;

	if (count > SIZE_MAX / size)
		return (NULL);
	remaining_memory = (count * size);
	index = 0;
	if (count < 1 || size < 1)
		return (NULL);
	pointer = malloc(count * size);
	if (pointer == NULL)
		return (NULL);
	while (remaining_memory > 0)
	{
		pointer[index] = 0;
		index++;
		remaining_memory--;
	}
	return ((void *)pointer);
}
