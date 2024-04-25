/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:55:58 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:24:26 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;

	c = (unsigned char *)s;
	while (n > 0)
	{
		*c = 0;
		c++;
		n--;
	}
}

int	main(void)
{
    char str1[10] = "banana";
    char str2[10] = "banana";

    printf("%s \n", str1);
    printf("%s \n", str2);
    bzero(str1, 2);
    ft_bzero(str2, 2);
    printf("%s \n", str1);
    printf("%s \n", str2);
}
