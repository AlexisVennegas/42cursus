
#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i = 0;
    int negative = 1;
    int result = 0;

    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if(str[i] == '-' || str[i] == '+')
        {
            if(str[i] == '-')
                negative *= -1;
            i++;
        }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return(result * negative);
}



void ope(char *nb1, char *ope, char *nb2)
{

    int numb1 = ft_atoi(nb1);
    int numb2 = ft_atoi(nb2);

    if(ope[0] == '+')
        printf("%d", numb1 + numb2);
    else if(ope[0] == '-')
        printf("%d", numb1 - numb2);
    else if(ope[0] == '*')
        printf("%d", numb1 * numb2);
    else if(ope[0] == '/')
        printf("%d", numb1 / numb2);
     else if(ope[0] == '%')
        printf("%d", numb1 % numb2);
    return ;
}

int main(int argc, char **argv)
{
    if(argc == 4)
        ope(argv[1], argv[2], argv[3]);
   printf("\n");
    return (0);
}