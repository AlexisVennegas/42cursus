
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nlst;

	if (!lst || !new)
		return ;
	nlst = *lst;
	if (!nlst)
	{
		*lst = new;
		return ;
	}		
	while (nlst -> next)
		nlst = nlst -> next;
	nlst -> next = new;
}

int main(void)
{
    t_list *new;
    char *str;

    str = "hola";
    new = ft_lstnew(str);
    ft_lstadd_back(&new, ft_lstnew("adios"));
    printf("%s", ft_lstlast(new)->content);
}