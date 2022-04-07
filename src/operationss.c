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

void    rb(t_stack **stackb, bool flag)
{
    t_stack *tmp;
    t_stack *last;

    if ((*stackb)->next == NULL)
        return ;
    last = *stackb;
    tmp = *stackb;
    *stackb = (*stackb)->next;
    while (tmp->next)
        tmp = tmp->next;
    last->next = NULL;
    tmp->next = last;
    if (flag)
        write(1, "rb\n", 3);
}

void    rr(t_stack **stacka, t_stack **stackb)
{
    ra(stacka, false);
    rb(stackb, false);
    write(1, "rr\n", 3);
}

