/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:12:01 by dvargas           #+#    #+#             */
/*   Updated: 2022/06/02 10:39:26 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
/*
int main ()
{
	t_list *marvel;

	marvel = ft_lstnew("DrEstranho");
	marvel -> next = ft_lstnew ("HomemdeFerro");
	marvel -> next -> next = ft_lstnew("HomemFormiga");

	printf("aqui o último da lista: %s", (char *)ft_lstlast(marvel) -> content);
}
*/
