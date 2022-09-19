/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:12:36 by dan               #+#    #+#             */
/*   Updated: 2022/09/17 10:25:09 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct trim
{
    int start;
    int len;
};

int check_if_set(char s1, char const *set)
{
    int i;

    i = -1;
    while (set[++i])
        if(s1 == set[i])
            return (1);
    return (0);
}

struct trim final_length(char const *s1, char const *set)
{
    struct trim data1;
    int i;
    int length;
    int a;

    i = -1;
    a = 0;
    length = 0;
    while(s1[++i] && check_if_set(s1[i], set) == 1)
        a++;
    while(s1[i] && check_if_set(s1[i], set) == 0)
    {
        length++;
        i++;
    }
    data1.start = a;
    data1.len = length;
    return (data1);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    struct trim data;
    int i;

    i = 0;
    data = final_length(s1, set);
    str = (char*)malloc(data.len + 1);
    while (i < data.len)
    {
        str[i] = s1[data.start + i];
        i++;
    }
    str[i] = '\0';
    return(str);
}