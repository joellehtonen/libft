/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:44:05 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:25:30 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((unsigned char)c >= 97 && (unsigned char)c <= 122)
		c -= 32;
	return (c);
}

int	main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 97;
	b = 97;
	c = 92;
	d = 92;
	printf("%d \n", a);
	printf("%d \n", b);
	printf("%d \n", c);
	printf("%d \n", d);
	a = ft_toupper(a);
	b = toupper(b);
	c = ft_toupper(c);
	d = toupper(d);
	printf("%d \n", a);
	printf("%d \n", b);
	printf("%d \n", c);
	printf("%d \n", d);
}
