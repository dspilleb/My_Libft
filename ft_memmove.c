/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:19:54 by dan               #+#    #+#             */
/*   Updated: 2022/09/11 19:19:56 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    const char *str;

	i = 0;
	//if (dest < src)
	

    str = src;
    i = -1;
    while(++i < n)
    	*((char*)dest + i) = str[i];
    return (dest);
}
/*
int main(void)
{
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	printf("Vaut au départ : %s\n", sResult);
	printf("Doit valoir : %s\n\n", sResult + 1);
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	printf("Pointer : %p\n", sResult);
	printf("Pointer + 1 : %p\n\n", sResult + 2);

	ft_memmove(sResult + 1, sResult, 2);
	printf("Résultat final : %s\n", sResult);
	//printf("Pointer final: %p\n", sResult);
}*/