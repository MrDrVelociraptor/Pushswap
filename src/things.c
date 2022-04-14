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
    data->stacka->max = curr->content;
    printf("%d\n", data->stacka->max);
    data->stacka->min = data->stacka->content;
    printf("%d\n", data->stacka->min);
    while (curr)
    {
        if (curr->content > data->stacka->max)
            data->stacka->max = curr->content;
        printf("max is %d\n", data->stacka->max);
        if (curr->content < data->stacka->min)
            data->stacka->min = curr->content;
        printf("min is %d\n", data->stacka->min);
        curr = curr->next;
    }
    printf("max is %d\n", data->stacka->max);
    printf("min is %d\n", data->stacka->min);
    return (data->stacka);
}
