/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:36:54 by nspeedy           #+#    #+#             */
/*   Updated: 2022/05/07 15:36:55 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_index(t_data *data, int n)
{
    t_stack *curr;
    int     count;

    count = 0;
    curr = data->stacka;
    while (curr)
    {
        if (curr->content < n)
            count++;
        curr = curr->next;
    }
    return (count);
}

void    index_list(t_data *data)
{
    t_stack *curr;

    curr = data->stacka;
    curr->index = 0;
    if (!curr)
        return ;
    while (curr->next != NULL)
    {
        curr->index = get_index(data, curr->content);
        curr = curr->next;
    }
    curr->index = get_index(data, curr->content);
}

int max_bits(t_data *data)
{
    t_stack *tmp;
    int max;
    int mb;

    tmp = data->stacka;
    max = tmp->index;
    mb = 0;
    while (tmp)
    {
        if (tmp->index > max)
            max = tmp->index;
        tmp = tmp->next;
    }
    while ((max >> mb) != 0)
        mb++;
    return (mb);
}

void    radx(t_data *data)
{
    t_stack *curr;
    int i;
    int j;
    int size;
    int mb;

    i = 0;
    curr = data->stacka;
    size = ft_lsttsize(data->stacka);
    mb = max_bits(data);
    while (i < mb)
    {
        j = 0;
        while (j++ < size)
        {
            curr = data->stacka;
            if (((curr->index >> i) & 1) == 1)
                ra(data, 1);
            else
                pb(data, 1);
        }
        while (ft_lsttsize(data->stackb) != 0)
            pa(data, 1);
        i++;
    }
}