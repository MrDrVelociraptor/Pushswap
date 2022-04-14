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
