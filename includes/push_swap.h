/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:05:54 by nspeedy           #+#    #+#             */
/*   Updated: 2022/03/21 11:05:56 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>

# define MAX 2147483647

typedef struct s_stack
{
    int             content;
    int             flag;
    struct s_stack  *next;
}   t_stack;

typedef struct s_data{
    t_stack *stacka;
    t_stack *stackb;
    int     min;
    int     max;
    int     operations;
}   t_data;

void    listerine(t_data *data, int content);
t_stack	*ft_new_stack(void *content);
void    sa(t_data *data, bool flag);
void    sb(t_data *data, bool flag);
int	    ft_lsttsize(t_stack *lst);
void    pa(t_data *data, bool flag);
void    pb(t_data *data, bool flag);
void    ra(t_data *data, bool flag);
void    rb(t_data *data, bool flag);
void    rr(t_data *data);
void    rra(t_data *data, bool flag);
t_stack *find_max(t_data *data);
bool    is_sorted(t_data *data);
int     node_index(t_data *data, int min);
void    sort3d(t_data *data);
void    sort5d(t_data *data);
void    rot_min(t_data *data);

#endif