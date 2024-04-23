/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:49:20 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/22 12:10:40 by jlehtone         ###   ########.fr       */
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
