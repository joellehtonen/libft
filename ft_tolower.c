/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:05:49 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:25:41 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((unsigned char)c >= 65 && (unsigned char)c <= 90)
		c += 32;
	return (c);
}

int	main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 65;
	b = 65;
	c = 92;
	d = 92;
	printf("%d \n", a);
	printf("%d \n", b);
	printf("%d \n", c);
	printf("%d \n", d);
	a = ft_tolower(a);
	b = tolower(b);
	c = ft_tolower(c);
	d = tolower(d);
	printf("%d \n", a);
	printf("%d \n", b);
	printf("%d \n", c);
	printf("%d \n", d);
}
