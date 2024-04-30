/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:59:42 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/30 10:17:13 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		index;
	int		len;
	char	*pointer;

	if (!s1)
		return (NULL);
	index = 0;
	len = ft_strlen((char *)s1);
	pointer = malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
		return (NULL);
	while (s1[index] != '\0')
	{
		pointer[index] = s1[index];
		index++;
	}
	pointer[index] = '\0';
	return (pointer);
}

int	main(void)
{
	char	*a;
	char	*b;

	a = ft_strdup("banana");
	b = strdup("banana");
	printf("%s \n", a);
	printf("%s \n", b);
}
