/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:58:00 by nspeedy           #+#    #+#             */
/*   Updated: 2022/03/21 10:58:01 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_stack **stacka, bool flag)
{
    t_stack *tmp;

    if (stacka && (*stacka)->next) //checks if the first and second thing in the list are there
    {
        tmp = (*stacka)->next; //tmp now equal to the second item in the list
        (*stacka)->next = tmp->next; //
        tmp->next = *stacka;
        *stacka = tmp;
    }
    if (flag)
        write(1, "sa\n", 3);
}

void    sb(t_stack **stackb, bool flag)
{
    t_stack *tmp;

    if (stackb && (*stackb)->next)
    {
        tmp = (*stackb)->next;
        (*stackb)->next = tmp->next;
        tmp->next = *stackb;
        *stackb = tmp;
    }
    if (flag)
        write(1, "sb\n", 3);
}

void    ss(t_stack **stacka, t_stack **stackb)
{
    sa(stacka, false);
    sb(stackb, false);
    write(1, "ss\n", 3);
}

void    pa(t_stack **stacka, t_stack **stackb)
{
    t_stack *tmp;

    if (*stackb)
    {
        tmp = (*stackb)->next;
        (*stackb)->next = *stacka;
        *stacka = *stackb;
        *stackb = tmp;
        write(1, "pa\n", 3);
    }
}

void    pb(t_stack **stacka, t_stack **stackb)
{
    t_stack *tmp;

    if (*stacka)
    {
        tmp = (*stacka)->next;
        (*stacka)->next = *stackb;
        *stackb = *stacka;
        *stacka = tmp;
        write(1, "pb\n", 3);
    }
}
