/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 00:03:14 by dvargas           #+#    #+#             */
/*   Updated: 2022/06/02 19:56:15 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*node;

	newlist = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&newlist, del);
		}
		ft_lstadd_back(&newlist, node);
		lst = lst -> next;
	}
	return (newlist);
}
/*
void f (void *pointer)
{
	char *str;
	int i = 0;
	str = (char *) pointer;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
}

void del(void *pointer)
{
	printf("NODE DELETED %p", pointer);
}

int main ()
{
	t_list *filosofos;

	filosofos = ft_lstnew("socrates");
	filosofos -> next = ft_lstnew("palatao");
	filosofos -> next -> next = ft_lstnew("aristoteles");
	printf ("Before listmap");
	int i = 0;
	while (i < 3)
	{
		printf("node %d, %s \n", i, filosofos->content);
		filosofos = filosofos -> next;
		i++;
	}
	ft_lstmap(filosofos,f, del);

}
*/
