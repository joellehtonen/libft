/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:59:42 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/22 11:12:31 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		index;
	int		len;
	char	*pointer;

	index = 0;
	len = ft_strlen((char *)s1);
	pointer = malloc((len + 1) * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	while (s1[index] != '\0')
	{
		pointer[index] = s1[index];
		index++;
	}
	return (pointer);
}
