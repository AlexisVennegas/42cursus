
#include "libft.h"

void   ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}
/*
int main(void)
{
    t_list *new;
    char *str;

    str = "hola";
    new = ft_lstnew(str);
    ft_lstadd_front(&new, ft_lstnew("adios"));
    printf("%s", new->content);
}
*/