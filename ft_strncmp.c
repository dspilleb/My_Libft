/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:49:31 by dan               #+#    #+#             */
/*   Updated: 2022/09/15 18:55:28 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    int result;

    result = 0;
    i = 0;
    while (s1[i] && i < n && s1[i] == s2[i])
        i++;
    if (i != n)
        result = (s1[i] - s2[i]);
    return (result);
}