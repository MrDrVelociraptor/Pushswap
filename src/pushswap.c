/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:55:35 by nspeedy           #+#    #+#             */
/*   Updated: 2022/03/21 11:55:37 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_fill_stack(t_stack **stacka, char **argv)
{
    int i;

    i = 1;
    *stacka = malloc(sizeof(t_stack));
    if (!(*stacka))
        return ;
    (*stacka)->content = ft_atoi(argv[i]);
    (*stacka)->next = 0;
    while (argv[++i])
    {
        listerine(stacka, ft_atoi(argv[i]));
    }
}

int main(int argc, char **argv)
{
    t_stack *stacka;
    t_stack *stackb;
    int     i;

    i = 1;
    stackb = NULL;
    if (argc < 3)
        return (0);
    ft_fill_stack(&stacka, argv);
    printf("%d\n", ft_lsttsize(stacka));
    //sa(&stacka, 0);
    pb(&stacka, &stackb);
    pb(&stacka, &stackb);
    pb(&stacka, &stackb);
    while (stackb)
    {
        printf("%d ------- %d\n", stacka->content, stackb->content);
        stacka = stacka->next;
        stackb = stackb->next;
        i++;
    }
    return (0);
}