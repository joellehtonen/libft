/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:01:05 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/19 16:36:40 by jlehtone         ###   ########.fr       */
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
