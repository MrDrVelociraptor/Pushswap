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

void    sa(t_stack **stacka)
{
    t_stack *tmp;

    if (stacka && (*stacka)->next) //checks if the first and second thing in the list are there
    {
        tmp = (*stacka)->next; //tmp now equal to the second item in the list
        (*stacka)->next = tmp->next; //
        tmp->next = *stacka;
        *stacka = tmp;
    }
    write(1, "sa\n", 3);
}

void    sb(t_stack **stackb)
{
    t_stack *tmp;

    if (stackb && (*stackb)->next)
    {
        tmp = (*stackb)->next;
        (*stackb)->next = tmp->next;
        tmp->next = *stackb;
        *stackb = tmp;
    }
    write(1, "sb\n", 3);
}

void    ss(t_stack **stacka, t_stack **stackb)
{
    sa(stacka);
    sb(stackb);
}