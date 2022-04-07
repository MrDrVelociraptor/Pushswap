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

void    rra(t_stack **stacka, bool flag)
{
    t_stack *tmp;
    t_stack *first;

    if ((*stacka)->next == NULL)
        return ;
    tmp = *stacka;
    printf("%d\n", tmp->content);
    while (tmp->next)
    {
        first = tmp;
        printf("%d ----- first is\n", first->content);
        tmp = tmp->next;
    }
    tmp->next = *stacka;
    printf("%d -------- what\n", tmp->content);
    first->next = NULL;
    *stacka = tmp;
    if (flag)
        write(1, "rra\n", 4);
}
