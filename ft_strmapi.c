/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:32:43 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 11:37:38 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*pointer;
	int		len;
	int		index;

	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	pointer = malloc(sizeof(char) * (len + 1));
	if (!pointer)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		pointer[index] = f(index, s[index]);
		index++;
	}
	pointer[index] = '\0';
	return (pointer);
}

static char	capitalize_second_letter(unsigned int i, char c)
{
	if ((c >= 'a' && c <= 'z') && (i % 2 != 0))
		c = c - 32;
	return (c);
}

int	main(void)
{
	char	*example;

	example = ft_strmapi("good morning", capitalize_second_letter);
	printf("Is every second letter capitalized? %s \n", example);
}
