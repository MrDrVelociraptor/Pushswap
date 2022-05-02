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

void    ra(t_data *data, bool flag)
{
    t_stack *tmp;
    t_stack *last;

    if (data->stacka->next == NULL) //End if there is only one element
        return ;
    last = data->stacka;
    tmp = data->stacka;
    data->stacka = data->stacka->next;
    while (tmp->next)
        tmp = tmp->next;
    last->next = NULL;
    tmp->next = last;
    if (flag)
    {
        write(1, "ra\n", 3);
        data->operations++;
    }
}

void    rb(t_data *data, bool flag)
{
    t_stack *tmp;
    t_stack *last;

    if (data->stackb->next == NULL)
        return ;
    last = data->stackb;
    tmp = data->stackb;
    data->stackb = data->stackb->next;
    while (tmp->next)
        tmp = tmp->next;
    last->next = NULL;
    tmp->next = last;
    if (flag)
    {
        write(1, "rb\n", 3);
        data->operations++;
    }
}

void    rr(t_data *data)
{
    ra(data, false);
    rb(data, false);
    write(1, "rr\n", 3);
    data->operations++;
}

