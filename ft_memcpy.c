/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:49:17 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/29 15:40:16 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

int	main(void)
{
	char str1[] = "love";
	char str2[] = "hate";
	char str3[] = "love";
	char str4[] = "hate";

	printf("%s \n", str1);
	printf("%s \n", str3);
	ft_memcpy(str1, str2, 2);
	memcpy(str3, str4, 2);
	printf("%s \n", str1);
	printf("%s \n", str3);
}
