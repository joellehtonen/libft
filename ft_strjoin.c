/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:01:00 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/10 15:07:33 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
		char	*pointer;
	size_t	index;
	size_t	s_len;

	index = 0;
	if (!s1 || !s2)
		return (NULL);
	s_len = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	pointer = malloc(sizeof(char) * ((s_len) + 1));
	if (pointer == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		pointer[index] = *s1;
		s1++;
		index++;
	}
	while (*s2 != '\0')
	{
		pointer[index] = *s2;
		s2++;
		index++;
	}
	pointer[index] = '\0';
	return (pointer);
}
