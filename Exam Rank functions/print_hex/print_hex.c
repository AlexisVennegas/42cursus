#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}


int ft_atoi(char *str)
{   
    int i = 0;
    int negative = 1;
    int result = 0;    
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            negative *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10)+ (str[i] - '0');
        i++;
    }
    return(result * negative);
}


int ft_countNb(int nb)
{
    int count = 0;
    while(nb)
    {
        nb /= 16;
        count++;
    }
    return(count);
}

void hexa(char *str)
{
    int nb;
    int i = 1;
    int rest;
    char *newstr;
    int total;

    rest = 0;
    nb = ft_atoi(str);
    if(!nb || nb < 0)
        return ;
    total = ft_countNb(nb);
    newstr = malloc(total * sizeof(char) + 1);
    if(!newstr)
        return ;
    while(nb != 0)
    {
        rest = nb % 16;
        if(rest >= 10)
            newstr[total - i++] = rest - 10 + 'a';
        else
            newstr[total - i++] = rest + '0';
        nb /= 16;
    }
    newstr[total] = '\0';
    ft_putchar(newstr);
    return ;
}



int main(int argc, char **argv)
{
    if(argc == 2)
        hexa(argv[1]);
    write(1, "\n", 1);
    return (0);
}