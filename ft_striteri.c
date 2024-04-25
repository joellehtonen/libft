/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:43:39 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 12:37:33 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	index = 0;
	if (s && f)
	{
		while (s[index] != '\0')
		{
			f(index, &s[index]);
			index++;
		}
	}
	printf("Is every letter capitalized? %s \n", s);
}

static void	capitalize_every_letter(unsigned int i, char *c)
{
	i = 0;
	while ((c[i] >= 'a' && c[i] <= 'z') && c[i] != '\0')
	{
		c[i] = c[i] - 32;
		i++;
	}
}

int	main(void)
{
	char str[] = "good morning";
	ft_striteri(str, capitalize_every_letter);
	//printf("Is every letter capitalized? %s \n", s);
}
