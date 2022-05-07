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
void    sa(t_data *data, bool flag)
{
    int x;

    if (data->stacka && data->stacka->next) //checks if the first and second thing in the list are there
    {
        x = data->stacka->content;
        data->stacka->content = data->stacka->next->content;
        data->stacka->next->content = x;
    }
    if (flag)
    {
        write(1, "sa\n", 3);
        data->operations++;
    }
}

void    sb(t_data *data, bool flag)
{
    int x;

    if (data->stackb && data->stackb->next)
    {
        x = data->stackb->content;
        data->stackb->content = data->stackb->next->content;
        data->stackb->next->content = x;
    }
    if (flag)
    {
        write(1, "sb\n", 3);
        data->operations++;
    }
}

void    ss(t_data *data)
{
    sa(data, false);
    sb(data, false);
    write(1, "ss\n", 3);
    data->operations++;
}

void    pa(t_data *data, bool flag)
{
    t_stack *curr;

    if (data->stackb)
    {
        curr = data->stackb->next;
        data->stacka = data->stackb;
        data->stackb = curr;
    }
    if (flag)
    {
        write(1, "pa\n", 3);
        data->operations++;
    }
}

void    pb(t_data *data, bool flag)
{
    t_stack *curr;

    if (data->stacka)
    {
        curr = data->stacka->next; //tmp points to second node
        data->stackb = data->stacka; //stackb 1st node = stacka 1st node
        data->stacka = curr; //stacka 1st node = tmp, which was orignal 2nd node
    }
    if (flag)
    {
        write(1, "pb\n", 3);
        data->operations++;
    }
}
