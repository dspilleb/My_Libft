/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:20:13 by dan               #+#    #+#             */
/*   Updated: 2022/10/03 15:56:13 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	a;

	a = 0;
	while (src[a])
		a++;
	if (size <= 0)
		return (a);
	i = 0;
	while (src[i] && size - 1 > i)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (a);
}
