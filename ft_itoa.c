/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:50:41 by dan               #+#    #+#             */
/*   Updated: 2022/09/17 12:15:23 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int len_int(int n)
{
    int len;

    len = 0;
    if (n < 0)
    {
        n *= -1;
        len++;
    }
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int n)
{
    char *str;
    int i;

    i = 0;
    str = (char*)malloc(len_int(n) + 1);
    if (n < 0)
    {
        str[0] = '-';
        n *= -1;
        i++;
    }
    while (i < 4 - 2)
    {
        str[i] = (n / (4 - i - 1)) + '0';
        i++;
    }
    //str[i] = n % 10 + 48;
    //str[i + 1] ='\0';
    return (str);
}

int main (void)
{
    printf("%s", ft_itoa(2000));
    return (0);
}