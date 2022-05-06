#include "push_swap.h"

// void rot_min(t_data *data)
// {
//     while (ft_lsttsize(data->stacka) > 5)
//     {
//         find_max(data);
//         if (data->stacka->content == data->min)
//             pb(data, 1);
//         else if (node_index(data, data->min) > ft_lsttsize(data->stacka) / 2)
//             rra(data, 1);
//         else if (node_index(data, data->min) < ft_lsttsize(data->stacka))
//             ra(data, 1);
//     }
//     sort5d(data);
//     while (ft_lsttsize(data->stackb) > 0)
//         pa(data, 1);
//     printf("Operations used = %d\n", data->operations);
    
// }

// void rot_min(t_data *data)
// {
    
//     if (is_sorted(data) == false)
//     {
//         find_max(data);
//         while (ft_lsttsize(data->stackb) < 3)
//         {
//             find_max(data);
//             if (data->stacka->content == data->min)
//                 pb(data, 1);
//             else if (node_index(data, data->min) > ft_lsttsize(data->stacka) / 2)
//                 rra(data, 1);
//             else
//                 ra(data, 1);    
//         }
//         printf("made it here\n");
//         while (ft_lsttsize(data->stacka) > 5)
//         {
//             printf("made it here also\n");
//             find_max(data);
//             if (data->stacka->content <= data->max / 5)
//             {
//                 pb(data, 1);
//                 if (data->stackb->content < data->stackb->next->content)
//                     sb(data, 1);
//             }
//             // else if (data->stacka->content > data->max / 5)
//             //     rra(data, 1);
//             // else
//             //     ra(data, 1);
//         }
//     }
// }

void rot_min(t_data *data)
{
    
    if (is_sorted(data) == false)
    {
        int size;

        size = 10;
        while (ft_lsttsize(data->stackb) < 3)
        {
            find_max(data);
            if (data->stacka->content == data->min)
            {
                pb(data, 1);
                printf("Max = %d ------- Min = %d\n", data->max, data->min);
                printf("stackb first round element = %d\n", data->stackb->content);
                
            }
            else if (node_index(data, data->min) > ft_lsttsize(data->stacka) / 2)
                rra(data, 1);
            else if (node_index(data, data->min) < ft_lsttsize(data->stacka))
                ra(data, 1);
        }
        while (ft_lsttsize(data->stacka) > 5)
        {
            if (data->stacka->content <= data->max / size)
            {
                pb(data, 1);
                if (data->stackb->content < data->stackb->next->content)
                {
                    printf("List B element = %d\n", data->stackb->content);
                    printf("List B next element = %d\n", data->stackb->next->content);
                    sb(data, 1);
                    if (data->stackb->content > data->stackb->next->content && data->stackb->next->content < data->stackb->next->next->content)
                    {
                        rb(data, 1);
                        sb(data, 1);
                        rrb(data, 1);
                        printf("yes\n");
                    }
                }
            }
            size -= 2;
            printf("1st stacka node = %d\n", data->stacka->content);
            // if (data->stacka->content > data->max / 10)
            //     rra(data, 1);
            // else
            //     ra(data, 1);
        }
        while (ft_lsttsize(data->stacka) > 0)
        {
            printf("List B %d\n", data->stackb->content);
            data->stackb = data->stackb->next;
        }
        sort5d(data);
        while (ft_lsttsize(data->stackb) > 0)
            pa(data, 1);
        printf("Operations used = %d\n", data->operations);
    }
}