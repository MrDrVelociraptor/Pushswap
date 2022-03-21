/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:39:18 by nspeedy           #+#    #+#             */
/*   Updated: 2022/03/16 14:39:21 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

typedef struct s_stack
{
    int             num;
    struct t_stack  *next;
    struct t_stack  *stacka;  
    struct t_stack  *stackb;  

}   t_stack;

t_stack *listerine(int data)
{
    t_stack *result;

    result = malloc(sizeof(t_stack));
    if (!result)
        return (0);
    result->num = data;
    result->next = 0;
    return (result);
}