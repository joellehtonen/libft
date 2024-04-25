/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:51:26 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:24:03 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}

int	main(void)
{
    char str1[10] = "banana";
    char str2[10] = "banana";

    printf("%s \n", str1);
    printf("%s \n", str2);
    memset(str1, 'o', 2);
    ft_memset(str2, 'o', 2);
    printf("%s \n", str1);
    printf("%s \n", str2);
}
