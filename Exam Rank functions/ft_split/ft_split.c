#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_cut(char *str, int i)
{
	int	count;

	count = 0;
	while (str[i] != ' ' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}
void	ft_free_array(char **array, int position)
{
	while (position--)
		free(array[position]);
	free(array);
}
int	ft_cut_array(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split_cut(char *str, char **array)
{
	int	i;
	int	position;
	int	aux;

	aux = 0;
	i = 0;
	position = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			array[position] = (char *)malloc(sizeof(char) * ft_cut(str, i) + 1);
			if (!array[position])
				return (ft_free_array(array, position), NULL);
			while (str[i] != ' ' && str[i])
				array[position][aux++] = str[i++];
			array[position++][aux] = '\0';
			aux = 0;
		}
		else
			i++;
	}
	array[position] = NULL;
	return (array);
}

char	**ft_split(char *str)
{
	char	**array;

	array = (char **)malloc(sizeof(char *) * ft_cut_array(str) + 1);
	if (!array)
		return (NULL);
	array = ft_split_cut(str, array);
	return (array);
}
/*
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(void)
{
	char	*str;
	char	c;
	int		i;

	str = "hola que tal";
	i = 0;
	while (i < ft_strlen(str))
	{
		printf("%s\n", ft_split(str)[i]);
		i++;
	}
	return (0);
}
*/