/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:09:53 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/30 16:35:16 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*pointer;

	a = c;
	pointer = (unsigned char *)s;
	while (n > 1)
	{
		if (*pointer == a)
		{
			return ((void *)pointer);
		}
		pointer++;
		n--;
	}
	return (NULL);
}

int	main(void)
{
	char *a;
	char *b;
	char *c;
	char *d;
	char s[] = {0, 1, 2 ,3 ,4 ,5};

	a = ft_memchr("Mozart", 'z', 7);
	b = memchr("Mozart", 'z', 7);
	c = ft_memchr(s, 0, 0);
	d = memchr(s, 0, 0);
	printf("%s \n", a);
	printf("%s \n", b);
	printf("%s \n", c);
	printf("%s \n", d);
}
