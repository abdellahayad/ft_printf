#include "ft_printf.h"

int ft_putadd(size_t add, int * i)
{
    char *a;

    a = "0123456789abcdef";
    if (add < 16)
        *i += ft_putchar(a[add]);
    else
    {
        ft_putadd(add / 16, i);
        ft_putadd(add % 16, i);
    }
    return (*i);
}