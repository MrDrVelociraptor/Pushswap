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

void listerine(t_data *data, int content)
{
    t_stack *curr;
    t_stack *add_node;

    add_node = malloc(sizeof(t_stack));
    if (!add_node)
        return ;
    add_node->content = content;
    add_node->flag = 0;
    add_node->next = 0;
    curr = data->stacka;
    while (curr->next)
        curr = curr->next;
    curr->next = add_node;
}