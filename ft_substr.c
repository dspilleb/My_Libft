/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:54:22 by dan               #+#    #+#             */
/*   Updated: 2022/09/15 21:39:14 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int length;
    char *str;
    int i;

    length = 0;
    i = -1;
    if (start < (unsigned int)ft_strlen((char*)(s)))
        while ((size_t)length < len && s[start + length] != '\0')
            length++;
    if (length < 0)
        return (NULL);
    str = malloc(length + 1);
    if (!str)
        return (NULL);
    while (++i < length)
        str[i] = s[start + i];
    str[i] = '\0';
    return (str);
}