
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = NULL;
	while (lst != 0)
	{
		tmp = lst;
		lst = lst -> next;
	}
	return (tmp);
}

int main(void)
{
    t_list *new;
    char *str;

    str = "hola";
    new = ft_lstnew(str);
    ft_lstadd_front(&new, ft_lstnew("adios"));
    printf("%s", ft_lstlast(new)->content);
}