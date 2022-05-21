/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:59:20 by dvargas           #+#    #+#             */
/*   Updated: 2022/05/20 16:53:46 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char* substr;
    size_t i;
    size_t j;

    if (!*s)
        return (NULL);
    substr = malloc(sizeof(*s) * len + 1);
    i = 0;
    while (i < start)
        i++;
    j=0;
    while (j < len)
    {
        substr[j] = s[i];
            i++;
            j++;
    }
    return (substr);
}
