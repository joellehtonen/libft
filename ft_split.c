/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:35:22 by jlehtone          #+#    #+#             */
/*   Updated: 2024/04/23 15:55:45 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.a"

//unfinished

static int	token_counter(const char *s, char c)
{
	int	count;
	int	index;

	index = 0;
	count = 1;
	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			count++;
		}
		index++;
	}
	return (count);
}

static char	*copier(const char *str, char delimiter)
{
	int		index;
	int		len;
	char	*pointer;

	index = 0;
	len = strlen((char *)str);
	pointer = malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
		return (NULL);
	while (str[index] != '\0' && str[index] != delimiter)
	{
		pointer[index] = str[index];
		index++;
	}
	pointer[index] = '\0';
	return (pointer);
}


char	**ft_split(char const *s, char c)
{
	char	*token;
	int		token_count;
	int		index;
	char	**result;

	token_count = token_counter(s, c);
	printf("Token count: %d \n", token_count);
	result = malloc(sizeof(char *) * (token_count));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			token = copier(s, c);
			result[index++] = token;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	result[index] = NULL;
	return (result);
}

int	main(void)
{
	char	*a;
	int		i;

	i = 0;
	a = *ft_split("123-456-7890", '-');
	while (a[i])
	{
		printf ("%c", a[i]);
		i++;
	}
	free(a);
}
