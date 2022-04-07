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

typedef struct s_stack
{
    int             content;
    int             flag;
    struct s_stack  *next; 
}   t_stack;

void    listerine(t_stack **stacka, int content);
t_stack	*ft_new_stack(void *content);
void    sa(t_stack **stacka, bool flag);
void    sb(t_stack **stackb, bool flag);
int	    ft_lsttsize(t_stack *lst);
void    pa(t_stack **stacka, t_stack **stackb);
void    pb(t_stack **stacka, t_stack **stackb);
void    ra(t_stack **stacka, bool flag);
void    rb(t_stack **stackb, bool flag);
void    rr(t_stack **stacka, t_stack **stackb);
void    rra(t_stack **stacka, bool flag);

#endif