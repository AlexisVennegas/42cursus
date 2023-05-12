#include <stdio.h>
#include <unistd.h>

void	rostring(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	j = i;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t'))
			i++;
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
			i++;
		while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t') && (str[i
				- 1] == ' ' || str[i - 1] == '\t'))
		{
			while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t'))
			{
				write(1, &str[i], 1);
				i++;
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	while (str[j] != '\0' && str[j] != ' ' && str[j] != '\t')
		write(1, &str[j++], 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}