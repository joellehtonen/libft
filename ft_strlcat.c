/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:50:01 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/29 15:41:06 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen((char *)dst);
	s_len = ft_strlen((char *)src);
	if (!dstsize)
		return (s_len);
	if (dstsize <= d_len)
		return (s_len + dstsize);
	while (*dst != '\0' && dstsize > 1)
	{
		dst++;
		dstsize--;
	}
	while (*src != '\0' && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	return (d_len + s_len);
}

int	main(void)
{
	char str1[9] = "mamma";
	char str2[] = "mia";
	char str3[9] = "mamma";
	char str4[] = "mia";
	int a;
	int b;

	printf("My func before alteration: %s \n", str1);
	printf("Lib func before alteration: %s \n", str3);
	a = ft_strlcat(str1, str2, 9);
	b = strlcat(str3, str4, 9);
	printf("My func after alteration: %s \n", str1);
	printf("Lib func after alteration: %s \n", str3);
	printf("My func return value %d \n", a);
	printf("Lib func return value: %d \n", b);
}