/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:49:25 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/03 13:53:14 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	sign = 1;
	result = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0') * sign;
		if (result < 0 && sign > 0)
			return (-1);
		else if (result > 0 && sign < 0)
			return (0);
		str++;
	}
	return ((int)result);
}

int main(void)
{
 int a = ft_atoi("12345");
 int b = ft_atoi("-456");
 int c = ft_atoi("2147483647");
 int d = ft_atoi("99999999999999999999");
 int e = atoi("99999999999999999999");

int f = atoi("2147483650");
int g = ft_atoi("2147483650");

 printf ("%d \n", a);
 printf ("%d \n", b); 
 printf ("%d \n", c);
 printf ("%d \n", d);
 printf ("%d \n", e);
 printf ("%d \n", f);
 printf ("%d \n", g);
}