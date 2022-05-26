/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:10:12 by dvargas           #+#    #+#             */
/*   Updated: 2022/05/26 18:27:13 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	j = dstsize;
	while (j != 0 && dst[i] != '\0')
	{
		i++;
		j--;
	}
	if (j == 0)
		return (dst_len);
	while (src[i])
	{
		if (j > 1)
		{
		dst[dst_len + i] = src[i];
		i++;
		}
		else
			break;
		j--;
	}
	dst[i] = '\0';
	return (i + dst_len);
}
