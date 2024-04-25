/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:14:22 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:23:13 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int i;
	int j;

	i = ft_isascii('a');
	j = isascii('a');
	printf("%d \n", i);
	printf("%d \n", j);
}
