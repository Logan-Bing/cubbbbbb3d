/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:10:24 by llugez            #+#    #+#             */
/*   Updated: 2025/12/15 16:03:18 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

int	ft_printf(const char *format, ...);

int	ft_putchar(char c);
int	ft_putstr(char *str);

int	ft_putnbr(int n);
int	convert_ptr(unsigned long n);
int	print_unsigned(unsigned int n);
int	print_hexa(unsigned int n, const char format);
int	print_ptr(void *ptr);

#endif