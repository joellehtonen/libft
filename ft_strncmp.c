/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:26:23 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:26:20 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 != '\0') && (*s1 == *s2) && (n > 0))
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char *s1 = "everest";
	char *s2 = "eveRest";
	int a;
	int	b;

	a = ft_strncmp(s1, s2, 5);
	b = strncmp(s1, s2, 5);
	printf("%d \n", a);
	printf("%d \n", b);
}
