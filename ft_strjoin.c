/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:54:58 by dvargas           #+#    #+#             */
/*   Updated: 2022/05/21 17:05:19 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char*   newstr;
    size_t i;
    size_t j;

    i = 0;
    newstr = malloc(sizeof(s1) + sizeof(s2) + 1);
    if (!newstr)
        return(NULL);
    while(s1[i])
    {
        newstr[i] = s1[i];
        i++;
    }
    j = 0;
    while(s2[j])
    {
        newstr[i + j] = s2[j];
        j++;
    }
    newstr[i + j] = '\0';
    return (newstr);
}
