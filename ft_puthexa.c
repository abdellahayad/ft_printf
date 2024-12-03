/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:48:28 by aayad             #+#    #+#             */
/*   Updated: 2024/12/01 11:49:45 by aayad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int nb, char c, int *i)
{
	char	*a;

	if (c == 'X')
		a = "0123456789ABCDEF";
	if (c == 'x')
		a = "0123456789abcdef";
	if (nb < 16)
		*i += ft_putchar(a[nb]);
	else
	{
		ft_puthexa(nb / 16, c, i);
		ft_puthexa(nb % 16, c, i);
	}
	return (*i);
}
