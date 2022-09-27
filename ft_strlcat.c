/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:20:02 by dan               #+#    #+#             */
/*   Updated: 2022/09/27 15:51:46 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	i;

	i = 0;
	dest_size = (size_t)ft_strlen(dest);
	src_size = (size_t)ft_strlen(src);
	if (size == 0 || dest_size > size)
		return (size + src_size);
	else if (!*src)
		return (dest_size);
	while (src[i] && (i + dest_size < size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return ((int)src_size + (int)dest_size);
}