/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:53:46 by dan               #+#    #+#             */
/*   Updated: 2022/10/01 20:40:58 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	adress;

	i = -1;
	adress = -1;
	while (c - 128 > 0)
		c -= 128;
	while (s[++i])
		if (s[i] == c)
			adress = i;
	if (s[i] == c)
			adress = i;
	if (adress != -1)
		return ((char *)&s[adress]);
	else
		return (NULL);
}
