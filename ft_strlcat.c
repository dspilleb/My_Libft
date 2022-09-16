/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:20:02 by dan               #+#    #+#             */
/*   Updated: 2022/09/11 19:20:13 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char *dest, char *src, int size)
{
    int i;
    int end_dest;
    if (ft_strlen(dest) == 0 || ft_strlen(dest) > size)
       return (size + ft_strlen(src));
    if (!*src)
        return (ft_strlen(dest));
    end_dest = ft_strlen(dest);
    i = 0;
    while (src[i] && (size - end_dest - 1 >  i))
    {
        dest[end_dest + i] = src[i];
        i++;
    }
    dest[end_dest + i] = '\0';
    return (end_dest + i);
}