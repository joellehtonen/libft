/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:35:22 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/23 13:32:10 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.a"

char **ft_split(char const *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			
		}
	}
}

int	main(void)
{
	char	*a;

	a = ft_split("african-american", '-');
	printf ("%s", a);
}

