/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:12:36 by dan               #+#    #+#             */
/*   Updated: 2022/09/16 20:45:26 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

struct trim
{
    int start;
    int len;
};

//Regarde si le charactère fait partie de set, retourne 1 si succès
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
    //loop jusque trouver charactère alpha et tant que partie de set
    while(s1[++i] && check_if_set(s1[i], set) == 1)
        a++;
    //loop toutes les chaines de caractères jusque set
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
/*
int main(void)
{
    printf("%s", ft_strtrim("aaa1234aaa", "a"));
    return (0);
}*/