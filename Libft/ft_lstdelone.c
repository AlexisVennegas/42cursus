
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst || !del)
        return ;
    del(lst->content);
    free(lst);
}

int main(void)
{
    t_list *new;
    char *str;

    str = "hola";
    new = ft_lstnew(str);
    ft_lstadd_front(&new, ft_lstnew("adios"));
    ft_lstdelone(new, free);
    printf("%s", new->content);
}