/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:42:27 by dvargas           #+#    #+#             */
/*   Updated: 2022/05/30 10:38:30 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long nb;

	nb = n;
	if (nb == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (n > 10)
		ft_putnbr_fd((n / 10), fd);
	nb = '0' + (nb % 10);
	ft_putchar_fd(nb, fd);
}
