/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:57:08 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/19 16:36:35 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*finder;

	finder = (char *)haystack;
	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack != 0 && len > 0)
	{
		while (*finder == *needle && *needle != '\0' && len > 0)
		{
			finder++;
			needle++;
			len--;
		}
		if (*needle == '\0')
			return ((char *)haystack);
		haystack++;
		finder++;
		len--;
	}
	return (NULL);
}
