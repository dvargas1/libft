/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:30:13 by dvargas           #+#    #+#             */
/*   Updated: 2022/06/02 15:43:47 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list *clear;
	
	while (*lst)
	{
		clear = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = clear;
	}
	*lst = NULL;
}
/*
void del(void *pointer)
{
	printf("NODE DELETED %p\n", pointer);
}

int main()
{
	t_list *tobedeleted;

	tobedeleted= ft_lstnew("eu");
	tobedeleted -> next = ft_lstnew("serei");
	tobedeleted -> next -> next = ft_lstnew("deletado");

	ft_lstclear(&tobedeleted, del);

}
*/
