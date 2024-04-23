/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:50:01 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/22 15:03:24 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen((char *)dst);
	s_len = ft_strlen((char *)src);
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
