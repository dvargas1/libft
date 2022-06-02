/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:54:38 by dvargas           #+#    #+#             */
/*   Updated: 2022/06/02 20:25:33 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char s, char sep)
{
	if (sep == s)
		return (1);
	return (0);
}

int	word_count(char const *s, char sep)
{
	int	i;
	int	wordcount;

	i = 0;
	wordcount = 1;
	while (s[i])
	{
		if (is_sep(s[i], sep) && !is_sep(s[i + 1], sep))
			wordcount++;
		i++;
	}
	return (wordcount);
}

char	*ft_separator(char const *s, char c)
{
	int		i;
	int		len;
	char	*new_s;

	len = 0;
	while (s[len] && !is_sep(s[len], c))
		len++;
	new_s = ft_calloc (sizeof(char), (len + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	str = ft_calloc(sizeof(char *), word_count(s, c) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && is_sep(s[i], c))
				i++;
		if (s[i] && !is_sep(s[i], c))
		{
			str[j] = ft_separator(s + i, c);
			j++;
		}
		while (s[i] && !is_sep(s[i], c))
			i++;
	}
	str[j] = NULL;
	return (str);
}
