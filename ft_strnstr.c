/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:34:06 by dan               #+#    #+#             */
/*   Updated: 2022/10/03 18:10:14 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strmatch(const char *haystack, const char *needle, size_t len, int i)
{
	int		a;
	size_t	c;

	a = 0;
	c = i;
	while (haystack[c] == needle[a] && \
	c < len && needle[a] && haystack[c])
	{
		a++;
		c++;
	}
	return (a);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	int			location;
	size_t		a;

	i = 0;
	a = 0;
	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			location = i;
			a = strmatch(haystack, needle, len, i);
			if (a == ft_strlen((char *)needle))
				return ((char *)&haystack[location]);
			else
				a = 0;
		}
		i++;
	}
	return (NULL);
}
