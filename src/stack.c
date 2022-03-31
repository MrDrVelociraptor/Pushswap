/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:39:18 by nspeedy           #+#    #+#             */
/*   Updated: 2022/03/16 14:39:21 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_new_stack(void *content)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->content = (int)content;
    node->flag = 0;
	node->next = 0;
	return (node);
}

int	ft_lsttsize(t_stack *lst)
{
	int	position;

	if (!lst)
		return (0);
	position = 0;
	while (lst != 0)
	{
		position++;
		lst = lst->next;
	}
	return (position);
}

void listerine(t_stack **stacks, int content)
{
    t_stack *curr;
    t_stack *add_node;

    add_node = malloc(sizeof(t_stack));
    if (!add_node)
        return ;
    add_node->content = content;
    add_node->flag = 0;
    add_node->next = 0;
    curr = *stacks;
    while (curr->next)
        curr = curr->next;
    curr->next = add_node;
}