/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:42:16 by dvargas           #+#    #+#             */
/*   Updated: 2022/06/02 10:31:03 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

/*
int main()
{
	int i = 0;
	t_list *filosofos;
	filosofos = ft_lstnew("Socrates");
	filosofos -> next = ft_lstnew("Aristoteles");
	filosofos -> next -> next = ft_lstnew("Platao");
	t_list *node = filosofos;
	for (int i = 0; i < 3; i++)
	{
		printf("no %d conteudo:%s endereco proximo %p\n", i, (char *)node->content, node->next );
		node =node->next;
	}

	t_list	*elemento4 = ft_lstnew("Freud");
	ft_lstadd_front(&filosofos,elemento4);
	printf("\n\n agora com o Elemento4 na frente\n");
	while (i < 4)
	{
		printf("no %d conteudo:%s \n", i, (char *)filosofos->content);
		filosofos = filosofos -> next;
		i++;
	}
}
*/

