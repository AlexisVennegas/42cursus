
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nlst;
	t_list	*plst;

	if (!lst || !del)
		return ;
	nlst = *lst;
	plst = *lst;
	while (nlst)
	{
		plst = plst -> next;
		del(nlst -> content);
		free(nlst);
		nlst = plst;
	}
	*lst = NULL;
}

int main(void)
{
    t_list *new;
    char *str;

    str = "hola";
    new = ft_lstnew(str);
    ft_lstadd_front(&new, ft_lstnew("adios"));
    ft_lstclear(&new, free);
    printf("%s", new->content);
}