/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayad <aayad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:20:36 by aayad             #+#    #+#             */
/*   Updated: 2024/11/28 20:39:43 by aayad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int format_type(va_list args, const char format)
{
    int     count;
    int i;
    
    i = 0;
    count = 0;
    if (format == 'c')
        count += ft_putchar(va_arg(args, int));
    else if (format == 's')
        count += ft_putstr(va_arg(args, char *));
    else if (format == 'd' || format == 'i')
        count += ft_putnbr(va_arg(args, int), &i);
    else if (format == 'p')
    {
        count += ft_putstr("0x");
        count += ft_putadd(va_arg(args, size_t), &i);
    }
    else if (format == 'u')
        count += ft_putunsigned(va_arg(args, unsigned int), &i);
    else if (format == 'x' || format == 'X')
        count += ft_puthexa(va_arg(args, unsigned int), format, &i);
    else if (format == '%')
        count += ft_putchar('%');
    return (count);
}

int ft_printf(const char *format, ...)
{
    int     i;
    va_list args;
    int     count;
    
    i = 0;
    count = 0;
    va_start(args, format);
    if (write(1, "", 0) == -1)
        return (-1);
    while (format[i])
    {
        if (format[i] == '%')
        {
            count += format_type(args, format[i + 1]);
            i++;
        }
        else
        {
            count += ft_putchar(format[i]);
        }
        i++;
    }
    va_end(args);
    return (count);
}
