/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:00:45 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/10 14:13:10 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	if (s == NULL)
		return (NULL);
	while (*s != '\0' && *s != a)
		s++;
	if (*s == a)
		return ((char *)s);
	return (NULL);
}
