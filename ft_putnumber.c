/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:32:44 by iakyaou           #+#    #+#             */
/*   Updated: 2022/11/23 15:39:30 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumber(int c)
{
	int	i;

	i = 0;
	if (c == (-2147483648))
		return (ft_putstring("-2147483648"));
	else if (c < 0)
	{
		i = i + ft_putchar('-');
		c = c * (-1);
		i = i + ft_putnumber(c);
	}
	else if (c > 9)
	{
		i = i + ft_putnumber(c / 10);
		i = i + ft_putnumber(c % 10);
	}
	else
		i = i + ft_putchar(c + 48);
	return (i);
}
