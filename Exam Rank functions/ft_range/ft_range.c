#include <stdio.h>
#include <stdlib.h>

#include <stdlib.h>

int	ft_absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	*ft_range(int start, int end)
{
	int	idx;
	int	size;
	int	*tab;

	idx = 0;
	size = ft_absolute_value(start - end);
	tab = (int *)malloc(sizeof(int) * size + 1);
	if (!tab)
		return (0);
	while (start < end)
	{
		tab[idx] = start;
		start++;
		idx++;
	}
	tab[idx] = start;
	while (start > end)
	{
		tab[idx] = start;
		start--;
		idx++;
	}
	tab[idx] = start;
	return (tab);
}

/*
int	main(void)
{
	int	i;
	int	*tab;

	tab = ft_range(0, -3);
	i = 0;
	while (i < 3)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
*/