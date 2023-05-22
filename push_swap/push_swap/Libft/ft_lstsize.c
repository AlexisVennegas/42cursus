
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
/*
int main(void)
{
    t_list *new;
    char *str;

    str = "hola";
    new = ft_lstnew(str);
    ft_lstadd_front(&new, ft_lstnew("adios"));
    printf("%d", ft_lstsize(new));
}
*/