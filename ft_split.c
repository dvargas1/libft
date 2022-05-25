/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:54:38 by dvargas           #+#    #+#             */
/*   Updated: 2022/05/25 00:54:10 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char** str;
	int i;
	int j;
	int k;
	
	str = malloc (sizeof(char**) * (ft_strlen(s) + 1));
	i = 0;
	j = 0;
	k = 0;
	str[j] = malloc (10);
	while (s[i])
	{
		if (!(s[i] == c))
		{
			str[j] [k] = s[i];
			i++;
			k++;
		}
		else
		{
			str[j] [k] = '\0';
			i++;
			j++;
			str[j] = malloc(sizeof(10));
			k = 0;
		}
	}
	str[j] [k] = '\0';
	return (str);
}
