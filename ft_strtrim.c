/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:21:49 by dvargas           #+#    #+#             */
/*   Updated: 2022/05/21 20:15:16 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_inset(char c, char const *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return(1);
        i++;
    }
    return (0);
}

char *ft_strtrim (char const *s1, char const *set)
{
    char* trim;
    size_t i;
    size_t j;

    j = ft_strlen(s1);
    i = 0;
    while(s1[i] && ft_inset(s1[i],set))
            i++;
    printf("%li", i);
    printf("%li\n", j);
    while(ft_inset(s1[j - 1], set) && i < j)
            j--;
    printf("%li\n", j);
    trim = ft_substr(s1, i, j - i);
    return (trim);
}
