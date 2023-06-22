#include <stdio.h>

int ft_atoi(char *str)
{
    int sign;
    int value;

    sign = 1;
    value = 0;
    while (*str == ' ' || *str == '+' || *str == '-')
    {
        if (*str == '-')
        {
            sign *= -1;
        }
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        value = (value * 10) + (*str - '0');
        str++;
    }
    return (sign * value);
}

int     main(void)
{
    printf("%d", ft_atoi(" ---+--+123456008.9ab567"));
    return (0);
}