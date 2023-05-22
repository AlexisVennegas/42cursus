
#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *result;

    result = malloc(sizeof(t_list));
    if (!result)
        return (NULL);
    result->content = content;
    result->next = NULL;
    return (result);
}
/*
int main(void)
{
    t_list *new;
    char *str;

    str = "hola";
    new = ft_lstnew(str);
    printf("%s", new->content);
}
*/