#include <unistd.h>


void ft_putchar(char letter)
{
    write(1, &letter, 1);
}

void rotone(char *str)
{
    int i = 0;
    while (str[i])
    {
        if(str[i] == 'Z')
            ft_putchar('A');
        else if (str[i] == 'z')
            ft_putchar('a');
        else if (str[i] >= 'a' && str[i] <= 'y')
            ft_putchar(str[i] + 1);
        else if (str[i] >= 'A' && str[i] <= 'y')
            ft_putchar(str[i] + 1);
        else
            ft_putchar(str[i]);
        i++;
    }
}


int main(int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    write(1, "\n", 1);
    return (0);
}