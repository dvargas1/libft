/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:59:20 by dvargas           #+#    #+#             */
/*   Updated: 2022/05/30 19:54:58 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (!*s)
		return (NULL);
	else if (ft_strlen(s) <= start)
		return (NULL);
	substr = malloc(sizeof(*s) * len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
		i = start;
	while (i < start)
		i++;
	j = 0;
	while (j < len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
