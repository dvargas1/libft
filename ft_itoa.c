/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:16:22 by dvargas           #+#    #+#             */
/*   Updated: 2022/05/30 15:32:40 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nbsize(long nb)
{
	size_t	i;

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
	return (i);
}

char	*empty(char *ada)
{
	ada[0] = '0';
	ada[1] = '\0';
	return (ada);
}

char	*ft_itoa(int n)
{
	char	*ada;
	long	i;
	long	nb;

	nb = n;
	i = nbsize(n);
	ada = malloc (sizeof(char) * (i + 1));
	if (!ada)
		return (NULL);
	if (nb == 0)
		return (empty(ada));
	if (nb < 0)
	{
		ada[0] = '-';
		nb *= -1;
	}
	ada[i] = '\0';
	i -= 1;
	while (nb > 0)
	{
		ada[i] = 48 + (nb % 10);
		nb /= 10;
		i--;
	}
	return (ada);
}
