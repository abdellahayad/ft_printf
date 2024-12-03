/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayad <aayad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:38:52 by aayad             #+#    #+#             */
/*   Updated: 2024/12/02 10:54:11 by aayad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
#include <libc.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putadd(size_t add, int *i);
int	ft_putnbr(int n, int *i);
int	ft_puthexa(unsigned int nb, char c, int *i);
int	ft_putunsigned(unsigned int n, int *i);
int	ft_printf(const char *format, ...);

#endif
