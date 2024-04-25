/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:15:02 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/25 09:27:58 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	int_counter(int num)
{
	int	space;

	space = 0;
	if (num < 0)
		space++;
	while (num != 0)
	{
		num = num / 10;
		space++;
	}
	return (space);
}

static char	*reverse(char *pointer)
{
	char	*end;
	char	*start;
	char	temp;

	end = pointer;
	start = pointer;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	if (*start == '-')
		start++;
	while (start < end)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
	return (pointer);
}

char	*ft_itoa(int n)
{
	char	*pointer;
	int		len;
	int		index;

	if (!n)
		return (NULL);
	len = int_counter(n);
	pointer = malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
		return (NULL);
	index = 0;
	if (n < 0)
	{
		pointer[index++] = '-';
		n = -n;
	}
	while (len > index)
	{
		pointer[index++] = n % 10 + '0';
		n = n / 10;
	}
	pointer[index] = '\0';
	reverse(pointer);
	return (pointer);
}

int	main(void)
{
	int		n;
	char	*a;

	n = -1848;
	a = ft_itoa(n);
	printf("%s \n", a);
}
