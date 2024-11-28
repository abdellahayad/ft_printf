#include "ft_printf.h"

int ft_putnbr(int n, int *i)
{
    if (n == -2147483648)
        *i += write(1, "-2147483648", 11);
    else if (n < 0)
    {
        *i += ft_putchar('-');
        ft_putnbr(n * -1, i);
    }
    else if (n > 9)
    {
        ft_putnbr(n / 10, i);
        ft_putnbr(n % 10, i);
    }
    else
        *i += ft_putchar(n + 48);
    return (*i);
}
