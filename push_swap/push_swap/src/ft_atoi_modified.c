#include "../push_swap.h"

int ft_atoi_modified(const char *str)
{
    int i = 0;
    long long int result = 0;
    int negative = 1;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
        if(str[i++] == '-')
            negative = -1;
   while(str[i])
   {
    if (!ft_isdigit(str[i]))
        errorHandler(NULL, 1);
    result = result * 10 + (str[i++] - '0');
   }
    if ((negative * result) > 2147483647 || (negative * result) < -2147483648)
        errorHandler(NULL, 1);
    return (result * negative);
}