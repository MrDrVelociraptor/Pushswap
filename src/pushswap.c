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
    t_data  data;

    if (argc < 3)
        return (0);
    ft_fill_stack(&data.stacka, argv);
    printf("Number of elements in stacka = %d\n", ft_lsttsize(data.stacka));
    //printf("Number of elements in stackb = %d\n", ft_lsttsize(stackb));
    find_max(&data);
    printf("%d -------- %d\n", data.stacka->max, data.stacka->min);
    //printf("%d\n", find_min(&stacka));
    return (0);
}