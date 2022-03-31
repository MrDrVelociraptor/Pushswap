/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationss.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:32:43 by nspeedy           #+#    #+#             */
/*   Updated: 2022/03/31 12:32:47 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack **stacka, bool flag)
{
    t_stack *tmp;
    t_stack *last;

    if ((*stacka)->next == NULL) //End if there is only one element
        return ;
    last = *stacka;
    tmp = *stacka;
    *stacka = (*stacka)->next;
    while (tmp->next)
        tmp = tmp->next;
    last->next = NULL;
    tmp->next = last;
    if (flag)
        write(1, "ra\n", 3);
}