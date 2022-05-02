/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   things.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:44:27 by nspeedy           #+#    #+#             */
/*   Updated: 2022/04/14 11:44:28 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *find_max(t_data *data)
{
    t_stack *curr;

    curr = data->stacka;
    data->max = curr->content;
    data->min = data->stacka->content;
    while (curr)
    {
        if (curr->content > data->max)
            data->max = curr->content;
        if (curr->content < data->min)
            data->min = curr->content;
        curr = curr->next;
    }
    return (data->stacka);
}

bool    is_sorted(t_data *data)
{
    if (data->stacka == NULL || data->stacka->next == NULL)
        return (true);
    while (data->stacka->next != NULL)
    {
        if (data->stacka->content < data->stacka->next->content)
            data->stacka = data->stacka->next;
        else
            return (false);
    }
    return (true);
}

int node_index(t_data *data, int min)
{
    int     i;
    t_stack *tmp;

    i = 0;
    tmp = data->stacka;
    while (tmp != NULL)
    {
        if (tmp->content == min)
            return (i);
        else
        {
            i++;
            tmp = tmp->next;
        }
    }
    return (-1);
}

void    sort3d(t_data *data)
{
    find_max(data);
    if (node_index(data, data->min) == 1 && node_index(data, data->max) == 2)
        sa(data, 1);
    else if (node_index(data, data->max) == 1 && node_index(data, data->min) == 2)
        rra(data, 1);
    else if (node_index(data, data->max) == 0 && node_index(data, data->min) == 1)
        ra(data, 1);
    else if (node_index(data, data->max) == 0 && node_index(data, data->min) == 2)
    {
        ra(data, 1);
        sa(data, 1);
    }
    else if (node_index(data, data->min) == 0 && node_index(data, data->max) == 1)
    {
        sa(data, 1);
        ra(data, 1);
    }
}

void    sort5d(t_data *data)
{
    while (ft_lsttsize(data->stacka) > 3)
    {
        find_max(data);
        if (ft_lsttsize(data->stacka) > 3)
        {
            if (data->stacka->content == data->min)
                pb(data, 1);
            if (node_index(data, data->min) == 3 || node_index(data, data->min) == 4)
                rra(data, 1);
            else if (node_index(data, data->min) == 1 || node_index(data, data->min) == 2)
                ra(data, 1);
        }
    }
    sort3d(data);
    pa(data, 1);
    pa(data, 1);
    printf("Operations used = %d\n", data->operations);
}