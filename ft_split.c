/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:20:46 by dan               #+#    #+#             */
/*   Updated: 2022/10/03 19:29:36 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	number_elements(char const *s, char c)
{
	int	i;
	int	elements;

	i = 0;
	elements = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			elements++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (elements);
}

int	start_of_element(int start, char const *s, char c)
{
	int	i;

	i = start;
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

int	strlen_to_sep(int start, char const *s, char c)
{
	int	i;

	i = start;
	while (s[i] && s[i] != c)
		i++;
	i = i - start;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	char	**arr;
	char	c_array[2];

	if (!s)
		return (NULL);
	c_array[0] = c;
	c_array[1] = '\0';
	i = -1;
	start = 0;
	arr = (char **)ft_calloc((number_elements(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (++i < number_elements(s, c))
	{
		start = start_of_element(start, s, c);
		arr[i] = ft_strtrim(s + start, c_array);
		if (!arr[i])
			return (NULL);
		start += strlen_to_sep(start, s, c);
	}
	arr[i] = NULL;
	return (arr);
}
