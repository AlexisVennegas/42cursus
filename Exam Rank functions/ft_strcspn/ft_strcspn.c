#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s1r, const char *s2r)
{
	const char	*s1;
	const char	*s2;

	s1 = s1r;
	while (*s1)
	{
		s2 = s2r;
		while (*s2)
		{
			if (*s1 == *s2++)
				return (s1 - s1r);
		}
		s1++;
	}
	return (s1 - s1r);
}
/*
int	main(void)
{
	char *text = "hola como estasc";
	char *text2 = "c";
	printf("result: %lu\n", strcspn(text, text2));
	printf("ft_res: %lu", ft_strcspn(text, text2));
	return (0);
}
*/