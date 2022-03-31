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
//swap the first 2 elements at the top of stacka, do nothing if only one of no elements
void    sa(t_stack **stacka, bool flag)
{
    int x;

    if (stacka && (*stacka)->next) //checks if the first and second thing in the list are there
    {
        x = (*stacka)->content;
        (*stacka)->content = (*stacka)->next->content;
        (*stacka)->next->content = x;
    }
    if (flag)
        write(1, "sa\n", 3);
}

void    sb(t_stack **stackb, bool flag)
{
    int x;

    if (stackb && (*stackb)->next)
    {
        x = (*stackb)->content;
        (*stackb)->content = (*stackb)->next->content;
        (*stackb)->next->content = x;
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
        tmp = (*stacka)->next; //tmp points to second node
        (*stacka)->next = *stackb; //stacka 1st node points to stackb 1st node instead of stacka 2nd
        *stackb = *stacka; //stackb 1st node = stacka 1st node
        *stacka = tmp; //stacka 1st node = tmp, which was orignal 2nd node
        write(1, "pb\n", 3);
    }
}
