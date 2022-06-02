/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:04:29 by dvargas           #+#    #+#             */
/*   Updated: 2022/06/02 15:07:05 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	last = ft_lstlast(*lst);
	if(!*lst)
		*lst = new;
	else
		last -> next = new;
}
/*
int main ()
{
	int i = 0;
	t_list *vila42;

	vila42 = ft_lstnew("Daniel");
	vila42 -> next = ft_lstnew("Leo");
	vila42 -> next -> next = ft_lstnew("Pinna");

	ft_lstadd_back(&vila42, ft_lstnew("Jeff"));
	while (i < 4)
	{
		printf("node %d conteudo %s \n", i, (char *) vila42 -> content);
		vila42 = vila42 -> next;
		i++;
	}
}
*/
