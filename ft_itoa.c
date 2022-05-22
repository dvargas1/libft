/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:16:22 by dvargas           #+#    #+#             */
/*   Updated: 2022/05/21 21:25:31 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t nbsize(long nb)
{
    size_t i;
    
    i = 0;
    if (nb < 0)
    {
        nb *= -1;
        i++;
    }
    while (nb > 0)
    {
        nb = nb / 10;
        i++;
    }
    return(i);
}

char *ft_itoa(int n)
{
    char* ada;
    size_t i;

    i = nbsize(n) - 1;
    ada = malloc (sizeof(char*) * i + 1);
    if (n == 0)
    {
        ada[0] = 0;
        return(ada);
    }
    if (n < 0)
    {
        ada[0] = '-';
        n *= -1;
    }
    while (n > 0)
    {
        ada[i] = 48 + (n % 10);
        n /= 10;
        i--;
    }
    return (ada);
}
