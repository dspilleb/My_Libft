/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:57:52 by dan               #+#    #+#             */
/*   Updated: 2022/10/01 18:42:56 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*s;

	if (nmemb > 2147483647 || size > 2147483647)
		return (NULL);
	i = -1;
	s = (char *)malloc(nmemb * size);
	if (!s)
		return (NULL);
	while (++i < nmemb * size)
		s[i] = 0;
	return (s);
}
