
#include <unistd.h>

void ft_putchar(char letter)
{
    write(1, &letter, 1);
}


int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}


void world(char *str)
{
    int len = (ft_strlen(str) - 1);
    while(str[len] == ' ' || str[len] == '\t')
        len--;
    while((str[len] != ' ' && str[len] != '\t') && len >= 0)
        len--;
    len += 1;
    while(str[len] && str[len] != ' ' && str[len] != '\t')
        ft_putchar(str[len++]);
    return ;
}


int main(int argc, char **argv)
{
    if(argc == 2)
        world(argv[1]);
    write(1, "\n", 1);
    return (0);
}