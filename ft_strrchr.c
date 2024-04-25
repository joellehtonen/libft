/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:01:05 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:26:09 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*latest;

	latest = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			(latest = (char *)s);
		}
		s++;
	}
	return (latest);
}

int	main(void)
{
	char *a;
	char *b;

	a = ft_strrchr("Mozart zapping", 'z');
	b = strrchr("Mozart zapping", 'z');

	printf("%s \n", a);
	printf("%s \n", b);
}
