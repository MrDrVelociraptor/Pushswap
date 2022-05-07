#include "push_swap.h"

void rot_min(t_data *data)
{
    while (ft_lsttsize(data->stacka) > 5)
    {
        find_max(data);
        if (data->stacka->content == data->min)
            pb(data, 1);
        else if (node_index(data, data->min) > ft_lsttsize(data->stacka) / 2)
            rra(data, 1);
        else if (node_index(data, data->min) < ft_lsttsize(data->stacka))
            ra(data, 1);
    }
    sort5d(data);
    while (ft_lsttsize(data->stackb) > 0)
        pa(data, 1);
    printf("Operations used = %d\n", data->operations);
    
}

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

