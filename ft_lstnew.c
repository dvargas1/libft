/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvarags@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:16:58 by dvargas           #+#    #+#             */
/*   Updated: 2022/06/01 20:32:57 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return(NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
/*
int main()
{
	t_list *elemento;

	elemento = ft_lstnew("testando isso aqui");
	printf("%s", (char *)elemento->content);
}
*/

