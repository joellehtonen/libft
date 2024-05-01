/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:35:22 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/01 14:08:34 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	token_counter(const char *s, char c)
{
	int	count;
	int	index;

	index = 0;
	if (s[index] == c)
		count = 0;
	else
		count = 1;
	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			if (s[index + 1] != c && s[index + 1] != '\0')
				count++;
		}
		index++;
	}
	return (count);
}

static int	token_len(const char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
	{
		len++;
	}
	return (len);
}

static char	*copier(const char *str, char delimiter)
{
	int		index;
	int		len;
	char	*pointer;

	index = 0;
	len = token_len(str, delimiter);
	pointer = malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}
	while (str[index] != '\0' && str[index] != delimiter)
	{
		pointer[index] = str[index];
		index++;
	}
	pointer[index] = '\0';
	return (pointer);
}

void	free_array(char **str, int i)
{
	while (i > 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	*token;
	int		index;
	char	**result;
	int		token_count;

	token_count = token_counter(s, c);
	result = malloc(sizeof(char *) * (token_count + 1));
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
			if (!token)
			{
				free_array(result, token_count);
				return (NULL);
			}
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
	char	**a;
	int		i;

	i = 0;
	a = ft_split("asian-african-american", '-');
	while (a[i])
	{
		printf ("%s \n", a[i]);
		i++;
	}
}
