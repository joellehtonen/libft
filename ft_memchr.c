/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:09:53 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/29 15:39:53 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*pointer;

	a = c;
	pointer = (unsigned char *)s;
	while (*pointer != a && n > 1)
	{
		pointer++;
		n--;
	}
	if (*pointer == a)
		return ((void *)pointer);
	return (0);
}

int	main(void)
{
	char *a;
	char *b;

	a = ft_memchr("Mozart", 'z', 7);
	b = memchr("Mozart", 'z', 7);

	printf("%s \n", a);
	printf("%s \n", b);
}

