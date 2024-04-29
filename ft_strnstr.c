/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:57:08 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/29 15:39:37 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		hay_index;
	int		need_index;

	hay_index = 0;
	need_index = 0;
	if (*needle < 1)
		return ((char *)haystack);
	while (*haystack != 0 && len > 0)
	{
		while (haystack[hay_index] == needle[need_index]
			&& needle[need_index] != '\0' && len > 0)
		{
			hay_index++;
			need_index++;
			len--;
		}
		if (needle[need_index] == '\0')
			return ((char *)haystack);
		else
			need_index = 0;
		haystack++;
		len--;
	}
	return (NULL);
}

int	main(void)
{
	char	*a;
	char	*b;

	a = ft_strnstr("flamingo-mike", "mike", 15);
	b = strnstr("flamingo-mike", "mike", 15);
	printf("%s \n", a);
	printf("%s \n", b);
}
