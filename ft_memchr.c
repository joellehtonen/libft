/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:09:53 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/19 16:35:07 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*memblock;

	a = c;
	memblock = (unsigned char *)s;
	while (*memblock != a && n > 0)
	{
		memblock++;
	}
	if (*memblock == a)
		return ((void *)memblock);
	return (0);
}
