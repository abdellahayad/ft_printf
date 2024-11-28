#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <libc.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putadd(size_t add, int *i);
int ft_putnbr(int n, int *i);
int ft_puthexa(unsigned int nb, char c, int *i);
int ft_putunsigned(unsigned int n, int *i);
int ft_printf(const char *, ...);

# endif