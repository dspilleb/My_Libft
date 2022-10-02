/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:53:55 by dan               #+#    #+#             */
/*   Updated: 2022/10/01 20:25:19 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = malloc((ft_strlen((char *)s)) + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s, ft_strlen((char *)s) + 1);
	return (str);
}
