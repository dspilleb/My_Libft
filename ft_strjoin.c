/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:11:12 by dan               #+#    #+#             */
/*   Updated: 2022/10/03 18:10:40 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	int			end_s1;
	char		*str;

	end_s1 = ft_strlen((char *)s1);
	i = -1;
	str = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	ft_strlcpy(str, (char *)s1, (unsigned int)ft_strlen((char *)s1) + 1);
	while (++i < ft_strlen((char *)s2))
		str[end_s1 + i] = s2[i];
	str[end_s1 + i] = '\0';
	return (str);
}
