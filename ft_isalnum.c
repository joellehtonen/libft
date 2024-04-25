/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:08:47 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:23:04 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	int i;
	int j;
	
	i = ft_isalnum('a');
	j = isalnum('a');
	printf("%d \n", i);
	printf("%d \n", j);
}

