#include "../push_swap.h"

static int	ft_blocks(int size)
{
	int	total;

	total = 0;
	if (size < 0)
		exit(1);
	else if (size > 5 && size < 50)
		total = 2;
	else if (size >= 50 && size < 75)
		total = 3;
	else if (size >= 75 && size < 100)
		total = 4;
	else if (size >= 100 && size < 200)
		total = 5;
	else if (size <= 200 && size < 300)
		total = 7;
	else if (size <= 300 && size < 600)
		total = 11;
	else
		total = 15;
	return (total);
}

struct s_stack	*ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_data data;
	int count = 0;
	int temp = 0;
    struct s_stack *aux;

	data.size = ft_lstsize(*stack_a);
	data.blocks = ft_blocks(data.size);
	data.rg = data.size / data.blocks;
	data.max = nbMax(*stack_a);
	while (count < data.blocks)
	{
		data.min = numberMin(*stack_a);
		*temp = selectBlock(*stack_a, data.min, data.rg);
		while (data.count_temp < data.rg)
		{
			if ((*stack_a)->num <= data.max)
			{
				ft_pb(stack_a, stack_b);
				data.count_temp++;
			}
			else
				ft_ra(stack_a);
		}
		data.i++;
	}
}
