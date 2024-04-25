/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:48:18 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:27:24 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointer;
	int		index;

	index = 0;
	if (len == 0)
		return (NULL);
	pointer = malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
		return (NULL);
	while (s[start] != '\0' && len > 0)
	{
		pointer[index++] = s[start++];
		len--;
	}
	return (pointer);
}

int	main(void)
{
	char *a;

	a = ft_substr("napoleon", 4, 4);
	printf("%s \n", a);
}
