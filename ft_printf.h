/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <iakyaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:49:36 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/23 15:40:24 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*  █████████            ██████████         ██████████         ██████████     */
/*  ██     ██                    ██                 ██         ██      ██     */
/*         ██                    ██                 ██         ██      ██     */
/*         ██                    ██                 ██                 ██     */
/*         ██            ██████████         ██████████                 ██     */
/*         ██                    ██                 ██                 ██     */
/*         ██                    ██                 ██                 ██     */
/*         ██                    ██                 ██                 ██     */
/*      ████████         ██████████         ██████████                 ██     */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putadress(unsigned long n);
int	ft_putchar(int c);
int	ft_puthexdecimal(char d, unsigned int n);
int	ft_putnumber(int c);
int	ft_putstring(char *d);
int	ft_putunsigned(unsigned int n);
#endif