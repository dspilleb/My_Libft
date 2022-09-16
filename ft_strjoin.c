/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:11:12 by dan               #+#    #+#             */
/*   Updated: 2022/09/16 20:11:13 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int end_s1;
    char *str;

    end_s1 = ft_strlen((char*)s1);
    i = -1;
    str = (char*)malloc(ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1);
    ft_strlcpy(str, (char*)s1, (unsigned int)ft_strlen((char*)s1) + 1);
    
    while (++i < ft_strlen((char*)s2))
        str[end_s1 + i] = s2[i];
    str[end_s1 + i] = '\0';
    return(str);
}
/*
int main(void)
{
    char *s1;
    s1 = ft_strjoin("Bonjour", "Bonsoir");
    printf("%s", s1);
    free (s1);
    return 0;
}*/