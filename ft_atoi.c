#include <stdio.h>
#include <stddef.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int nbr;

    i = 0;
    sign = 1;
    nbr = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if(str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    if(str[i] == '+')
        i++;
    while((str[i] >= '0' && str[i] <= '9') )
    {
        nbr *= 10;
        nbr += str[i] - '0';
        i++;
    }
    return (nbr * sign);
}
int main()
{
    printf("%d", ft_atoi("  -123"));
}
