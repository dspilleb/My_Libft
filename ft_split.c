/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:20:46 by dan               #+#    #+#             */
/*   Updated: 2022/09/25 11:35:32 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//protéger les mallocs ! Calloc

#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

struct ft_split
{
    int number_elements;
    int *start_of_elements;
};


struct ft_split number_elements(char const *s, char c)
{
    struct ft_split data;
    int i;
    int elements;

    elements = 0;
    i = -1;
    data.start_of_elements = malloc(sizeof(int) * 10000);
    if (!data.start_of_elements)
        return (data);
    while(s[++i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            data.start_of_elements[elements] = i;
            elements++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    data.number_elements = elements;
    return(data);
}

int *size_sub_elements(char const *s, char c)
{
    int i;
    int elements;
    int length;
    int *tab;

    tab = malloc(sizeof(int) * 10000);
    if (!tab)
        return (NULL);
    i = -1;
    elements = 0;
    while(s[++i])
    {
        if (s[i] && s[i] != c)
        {
            length = 0;
            while (s[++i] && s[i] != c)
                length++;
            tab[elements] = length;
            elements++;
        }
    }
    return(tab);
}

char **ft_split(char const *s, char c)
{
    char **arr;
    char c_array[2];
    int *tab;
    int i;
    struct ft_split data1;

    c_array[0] = c;
    c_array[1] = '\0';
    i = -1;
    data1 = number_elements(s, c);
    tab = size_sub_elements(s, c);
    arr = (char**)malloc((data1.number_elements + 1) * sizeof(char*));
    if (!arr)
        return (NULL);
    while (++i < data1.number_elements)
        arr[i] = (char*) ft_calloc(tab[i] + 1, sizeof(char));
    arr[data1.number_elements] = (char*) malloc(1);
    arr[data1.number_elements] = '\0';
    i = -1;
    while(++i < data1.number_elements)
        arr[i] = ft_strtrim((char*)s + data1.start_of_elements[i], c_array);
    i = -1;
    /*
    while (arr[++i])
    {
        //printf("Emplacement : %d ", i);
        //printf("%s\n\n", arr[i]);
        free(arr[i]);
    }*/
    free(data1.start_of_elements);
    free(tab);
    return (arr);
}
/*
int main(void)
{
    char **arr;
    arr = ft_split("  tripouille  42  ", ' ');
    //free (str);
    free(arr);
    return (0);
}*/