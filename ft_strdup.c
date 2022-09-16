/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:53:55 by dan               #+#    #+#             */
/*   Updated: 2022/09/15 18:55:15 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *str;

    str = malloc((ft_strlen((char*)s)) + 1);
    if (!str)
        return (NULL);
    ft_memcpy(str, s, ft_strlen((char*)s) + 1);
    return (str);
}