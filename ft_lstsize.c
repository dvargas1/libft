/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:07:47 by dvargas           #+#    #+#             */
/*   Updated: 2022/06/02 10:34:37 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	
	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
/*
int main ()
{
	t_list *criatividade;
	criatividade = ft_lstnew("estou");
	criatividade -> next = ft_lstnew("sem");
	criatividade -> next -> next = ft_lstnew ("ela");

	printf("Aqui o tamanha da lista %d", ft_lstsize(criatividade));
}
*/
