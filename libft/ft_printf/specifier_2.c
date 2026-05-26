/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:15:21 by llugez            #+#    #+#             */
/*   Updated: 2025/12/15 16:05:36 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// • %d and %i Prints a decimal (base 10) number.
int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		count++;
		ft_putchar('-');
	}
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
		n = n % 10;
	}
	count += ft_putchar(n + '0');
	return (count);
}

int	print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += print_unsigned(n / 10);
		n = n % 10;
	}
	count += ft_putchar(n + '0');
	return (count);
}

// • %x/%X Prints a number in hexadecimal (base 16) lowercase/upperCase format.
int	print_hexa(unsigned int n, const char format)
{
	int		count;
	char	*base_hexa;

	if (format == 'X')
		base_hexa = "0123456789ABCDEF";
	else
		base_hexa = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += print_hexa(n / 16, format);
		n = n % 16;
	}
	count += ft_putchar(base_hexa[n]);
	return (count);
}

int	convert_ptr(unsigned long n)
{
	int		count;
	char	*base_hexa;

	count = 0;
	base_hexa = "0123456789abcdef";
	if (n >= 16)
	{
		count += convert_ptr(n / 16);
		n = n % 16;
	}
	count += ft_putchar(base_hexa[n]);
	return (count);
}

int	print_ptr(void *ptr)
{
	unsigned long long	ul_ptr;
	int					count;

	if (!ptr)
		return (ft_putstr("(nil)"));
	ul_ptr = (unsigned long long)ptr;
	count = 0;
	count += ft_putstr("0x");
	count += convert_ptr(ul_ptr);
	return (count);
}
