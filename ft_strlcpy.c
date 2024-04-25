/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:49:20 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:24:54 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	while (*src != '\0' && dstsize > 1)
	{
		*dst++ = *src++;
		len++;
		dstsize--;
	}
	*dst = '\0';
	return (len);
}

int	main(void)
{
	char str1[] = "computer";
	char str2[] = "mac";
	char str3[] = "computer";
	char str4[] = "mac";

	printf("%s \n", str1);
	printf("%s \n", str3);
	ft_strlcpy(str1, str2, 3);
	strlcpy(str3, str4, 3);
	printf("%s \n", str1);
	printf("%s \n", str3);
}