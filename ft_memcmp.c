/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:41:24 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:26:37 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while ((*a == *b) && (n > 0))
	{
		a++;
		b++;
		n--;
	}
	return (*a - *b);
}

int	main(void)
{
	char *s1 = "everest";
	char *s2 = "eveRest";
	int a;
	int	b;

	a = ft_memcmp(s1, s2, 2);
	b = memcmp(s1, s2, 2);
	printf("%d \n", a);
	printf("%d \n", b);
}
