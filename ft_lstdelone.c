/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:21:45 by dvargas           #+#    #+#             */
/*   Updated: 2022/06/02 15:41:57 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
/*
void del(void *pointer)
{
	printf("NODE DELETED %p\n", pointer);
}

int main ()
{
	int i = 0;
	t_list *tobedeleted;
	
	tobedeleted = ft_lstnew("eu");
	tobedeleted -> next = ft_lstnew("serei");
	tobedeleted -> next -> next = ft_lstnew("deletado");

	ft_lstdelone(tobedeleted,del);
}
*/
