/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:01:57 by dvargas           #+#    #+#             */
/*   Updated: 2022/05/22 21:29:20 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi (char const *s, char (*f) (unsigned int, char))
{
    char *str;
    int i;
    int j;

    i = ft_strlen(s);
    str = malloc(sizeof(char*) * i);
    j = 0;
    while (i > j)
    {
        str[j] = f(i, s[j]);
        j++;
    }
    str[j] = '\0';
    return (str);
}
