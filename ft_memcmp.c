/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:49:27 by dan               #+#    #+#             */
/*   Updated: 2022/09/12 13:03:25 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_abs(int c)
{
    if (c < 0)
        c *= -1;
    return (c);
}

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const char *str1;
    const char *str2;

    str1 = s1;
    str2 = s2;
    i = 0;
    while (str1[i] == str2[i] && i < n)
        i++;
    if (i != n)
        return(ft_abs(str1[i]) - ft_abs(str2[i]));
    else
        return(0);
}