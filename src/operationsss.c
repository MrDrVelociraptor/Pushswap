/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationsss.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:19:33 by nspeedy           #+#    #+#             */
/*   Updated: 2022/04/07 10:19:35 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_data *data, bool flag)
{
    t_stack *tmp;
    t_stack *first;

    if (data->stacka->next == NULL)
        return ;
    tmp = data->stacka;
    while (tmp->next)
    {
        first = tmp;
        tmp = tmp->next;
    }
    tmp->next = data->stacka;
    first->next = NULL;
    data->stacka = tmp;
    if (flag)
        write(1, "rra\n", 4);
}
