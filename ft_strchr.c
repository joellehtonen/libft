/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:09:50 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:26:00 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	if (s == 0)
		return (0);
	while (*s != '\0' && *s != a)
	{
		s++;
	}
	if (*s == a)
		return ((char *)s);
	return (0);
}

int	main(void)
{
	char *a;
	char *b;

	a = ft_strchr("Mozart", 'z');
	b = strchr("Mozart", 'z');

	printf("%s \n", a);
	printf("%s \n", b);
}
