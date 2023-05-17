#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct s_stack
{
    int num;
    int id;
    struct s_stack *next;
}	t_stack;

