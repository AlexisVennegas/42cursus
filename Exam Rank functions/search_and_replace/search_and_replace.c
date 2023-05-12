#include <unistd.h>
#include <stdio.h>

void ft_putchar(char letter)
{
    write(1, &letter, 1);
}

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return(i);
}


void search(char *str, char *letter, char *word)
{
    int i;

    i = 0;
    if(ft_strlen(letter) != 1 && ft_strlen(word) != 1)
        return ;
    while(str[i])
    {
        if(str[i] == letter[0])
            ft_putchar(word[0]);
        else if(str[i] != letter[0])
            ft_putchar(str[i]);
        else
            i++;
    i++;
    }
    return ;
}

int main(int argc, char **argv)
{   
    if(argc == 4)
        search(argv[1], argv[2], argv[3]);
    write(1, "\n", 1);
    return(0);
}