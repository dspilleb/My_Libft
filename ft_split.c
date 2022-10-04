/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:20:46 by dan               #+#    #+#             */
/*   Updated: 2022/10/04 14:48:05 by dan              ###   ########.fr       */
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

char	*copy(char const *s, int len)
{
	char	*str;
	int		i;

	i = -1;
	str = (char *)malloc(len + 1);
	while (++i < len && s[i])
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	char	**arr;

	if (!s)
		return (NULL);
	i = -1;
	start = 0;
	arr = (char **)ft_calloc((number_elements(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (++i < number_elements(s, c))
	{
		start = start_of_element(start, s, c);
		arr[i] = copy(s + start, strlen_to_sep(start, s, c));
		if (!arr[i])
			return (NULL);
		start += strlen_to_sep(start, s, c);
	}
	arr[i] = NULL;
	return (arr);
}
