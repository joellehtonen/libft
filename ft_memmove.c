/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:55:54 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:24:44 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst <= src)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += len - 1;
		s += len - 1;
		while (len--)
		{
			*d-- = *s--;
		}
	}
	return (dst);
}

int	main(void)
{
	char str1[] = "mac";
	char str2[] = "computer";
	char str3[] = "mac";
	char str4[] = "computer";

	printf("%s \n", str1);
	printf("%s \n", str3);
	ft_memmove(str1, str2, 1);
	memmove(str3, str4, 1);
	printf("%s \n", str1);
	printf("%s \n", str3);
}
