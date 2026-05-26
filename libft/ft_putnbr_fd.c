/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:38:21 by llugez            #+#    #+#             */
/*   Updated: 2025/11/18 14:51:50 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}
// int main() 
// { 
// 	// fd = open("tripouille", O_RDWR | O_CREAT, 0777);
// 	// ft_putnbr_fd(INT_MIN, fd);
// 	// lseek(fd, SEEK_SET, 0);
// 	// read(fd, s, 12);
// 	// /* 4 */ check(!strcmp(s, to_string(INT_MIN).c_str())); showLeaks();
// 	// close(fd);
// 	// unlink("./tripouille");

// 	int fd = open("tripouille", O_WRONLY);
// 	ft_putnbr_fd(-2147483648, fd);
// }