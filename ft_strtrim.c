/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:12:36 by dan               #+#    #+#             */
/*   Updated: 2022/10/04 11:11:02 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	check_if_set(char s1, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (s1 == set[i])
			return (TRUE);
	return (FALSE);
}

int	check_if_last_set(char const *s1, char const *set)
{
	int	i;

	i = -1;
	while (s1[++i])
		if (check_if_set(s1[i], set) != TRUE)
			return (FALSE);
	return (TRUE);
}

int	len_trim(char const *s1, char const *set)
{
	int	i;
	int	len;

	len = 0;
	i = -1;
	while (check_if_set(s1[++i], set) == TRUE)
		len++;
	i--;
	while (s1[++i])
		if (check_if_last_set(&s1[i], set) == FALSE)
			len++;
	return (len);
}

char	*copy(char *str, char const *s1, char const *set)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	while (check_if_set(s1[i], set) == TRUE)
		i++;
	while (s1[i])
	{
		if (check_if_last_set(&s1[i], set) == FALSE)
		{
			str[a] = s1[i];
			a++;
		}
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	len = len_trim(s1, set);
	str = (char *)malloc(len);
	if (!str)
		return (0);
	str = copy (str, s1, set);
	return (str);
}
