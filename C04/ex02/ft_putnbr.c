#include <unistd.h>

void    print_number(int nb)
{
    int divider;
    int alpha;
    int start_print;

    divider = 1000000000;
    while (divider)
    {
        if (nb / divider)
        {
            start_print = 1;
        }
        if (start_print == 1)
        {
            alpha = '0' + (nb / divider);
            write(1, &alpha, 1);
        }
        nb %= divider;
        divider /= 10;
    }
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
        print_number(nb);
    }
    else if (nb == 0)
    {
        write(1, "0", 1);
    }
    else 
    {
        print_number(nb);
    }
}

int main(void)
{
    ft_putnbr(-12345090);
    return (0);
}