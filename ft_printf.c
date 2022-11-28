/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:01:43 by iakyaou           #+#    #+#             */
/*   Updated: 2022/11/23 15:39:24 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_arg(va_list argument, char arg, int *i)
{
	int	number;

	number = 0;
	if (arg == 'i' || arg == 'd')
		number = number + ft_putnumber(va_arg(argument, int));
	else if (arg == 'c')
		number = number + ft_putchar(va_arg(argument, int));
	else if (arg == 's')
		number = number + ft_putstring(va_arg(argument, char *));
	else if (arg == '%')
		number = number + ft_putchar('%');
	else if (arg == 'x' || arg == 'X')
		number = number + ft_puthexdecimal(arg, va_arg(argument, unsigned int));
	else if (arg == 'u')
		number = number + ft_putunsigned(va_arg(argument, unsigned int));
	else if (arg == 'p')
	{
		number = number + ft_putstring("0x");
		number = number + ft_putadress(va_arg(argument, unsigned long));
	}
	else
		(*i)--;
	return (number);
}

int	ft_printf(const char *format, ...)
{
	va_list		arg;
	int			len_en;
	int			i;

	len_en = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(arg, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			len_en = len_en + ft_check_arg(arg, format[++i], &i);
		else
			len_en = len_en + ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (len_en);
}
