

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new;
    t_list *tmp;

    if (!lst || !f)
        return (NULL);
    new = ft_lstnew(f(lst->content));
    if (!new)
        return (NULL);
    tmp = new;
    lst = lst->next;
    while (lst)
    {
        new = ft_lstnew(f(lst->content));
        if (!new)
        {
            ft_lstclear(&tmp, del);
            return (NULL);
        }
        ft_lstadd_back(&tmp, new);
        lst = lst->next;
    }
    return (tmp);
}