#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

void	alpha(char *str)
{
	char	tab[] = "zyxwvutsrqponmlkjihgfedcba";
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = tab[str[i] - 'a'];
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = tab[str[i] - 'a'] - 32;
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
