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