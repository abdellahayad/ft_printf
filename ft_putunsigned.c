/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayad <aayad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:53:48 by aayad             #+#    #+#             */
/*   Updated: 2024/12/02 09:37:18 by aayad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n, int *i)
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
