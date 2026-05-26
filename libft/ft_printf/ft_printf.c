/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:15:40 by llugez            #+#    #+#             */
/*   Updated: 2025/12/15 16:03:45 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_specifier(va_list args, char specifier)
{
	if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (print_hexa(va_arg(args, unsigned int), specifier));
	else if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 'p')
		return (print_ptr(va_arg(args, void *)));
	else if (specifier == '%')
		return (ft_putchar('%'));
	else
		return (-1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	if (!format)
		return (0);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += check_specifier(args, format[i + 1]);
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

// void	tester(char *specifier, int n_args, ...)
// {
// 	va_list args_1;
// 	va_list args_2;
// 	int	n = 0;
// 	int	x = 0;
// 	va_start(args_1, n_args);
// 	va_start(args_2, n_args);
// 	for (int i = 0; i < n_args; i++) {
// 		n = printf(specifier, va_arg(args_1, int));
// 		printf(" || ");
// 		fflush(stdout);
// 		x = ft_printf(specifier, va_arg(args_2, int));
// 		printf(" || ");
// 		fflush(stdout);
// 		printf("%d %d", n, x);
// 		printf("\n");
// 	}
// }

// int main()
// {
// 	// Char Test
// 	// char	c_1 = 'a',
// 	// 		c_2 = 'c',
// 	// 		c_3 = '1';

// 	// tester("%c", 2, c_1, c_2, c_3);

// 	// // String Test
// 	// char	*s_1 = NULL,
// 	// 		*s_2 = "hi guys",
// 	// 		*s_3 = "fuck this test",
// 	// 		*s_4 = "this is a HUGEEEEEEEEEEEEEEEEEE TEEEEEST";
// 	// tester("%s", 4, s_1, s_2, s_3, s_4);
// 	// tester("%p", 4, s_1, s_2, s_3, s_4);
// 	// tester("%%", 4, s_1, s_2, s_3, s_4);

// 	// // Integer Test
// 	// int		i_1 = 42,
// 	// 		i_2 = -2147483648,
// 	// 		i_3 = 2147483647,
// 	// 		i_4 = -42;
// 	// tester("%d", 4, i_1, i_2, i_3, i_4);

// 	// // Unsigned long test
// 	// unsigned long	u_1 = -10,
// 	// 				u_2 = 4294967295,
// 	// 				u_3 = 42;
// 	// tester("%u", 3, u_1, u_2, u_3);

// 	printf("%p %p", LONG_MIN)
// }