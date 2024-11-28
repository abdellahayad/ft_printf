#include "ft_printf.h"

int ft_putunsigned(unsigned int n, int *i)
{
    if (n > 9)
    {
        ft_putunsigned(n / 10, i);
        ft_putunsigned(n % 10, i);
    }
    else
        *i += ft_putchar(n + 48);
    return (*i);
}
