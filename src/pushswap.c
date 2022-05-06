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

static void ft_fill_stack(t_data *data, char **argv)
{
    int i;
    
    i = 1;
    data->stacka = malloc(sizeof(t_stack));
    if (!data->stacka)
        return ;
    data->stacka->content = ft_atoi(argv[i]);
    data->stacka->next = 0;
    while (argv[++i])
    {
        listerine(data, ft_atoi(argv[i]));
    }
}

int main(int argc, char **argv)
{
    t_data  data;

    data.operations = 0;
    if (argc < 3)
        return (0);
    ft_fill_stack(&data, argv);
    printf("Number of elements in stacka = %d\n", ft_lsttsize(data.stacka));
    printf("Number of elements in stackb = %d\n", ft_lsttsize(data.stackb));
    find_max(&data);
    printf("Max = %d ------- Min = %d\n", data.max, data.min);
    rot_min(&data);
    return (0);
}