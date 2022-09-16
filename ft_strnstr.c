/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:34:06 by dan               #+#    #+#             */
/*   Updated: 2022/09/12 16:19:06 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    int location;
    int a;
    size_t c;

    i = 0;
    a = 0;
    if (ft_strlen((char*)needle) == 0)
        return((char*)haystack);
    while (haystack[i] && i < len)
    {
        if (haystack[i] == needle[0])
        {
            location = i;
            c = i;
            while (haystack[c] == needle[a] && c < len && needle[a] && haystack[c])
            {
                a++;
                c++;
            }
            if (a == ft_strlen((char*)needle))
                return((char*)&haystack[location]);
            else
                a = 0;
        }
        i++;
    }
    return (NULL);
}