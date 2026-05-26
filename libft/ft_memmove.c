/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:17:37 by llugez            #+#    #+#             */
/*   Updated: 2025/11/18 14:08:30 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void *dest, const void *src, size_t size )
{
	unsigned char	*dest_casted;
	unsigned char	*src_casted;

	dest_casted = (unsigned char *)dest;
	src_casted = (unsigned char *)src;
	if (dest < src)
	{
		ft_memcpy(dest, src, size);
	}
	else
	{
		while (size > 0)
		{
			size--;
			dest_casted[size] = src_casted[size];
		}
	}
	return (dest);
}
//  int main() 
// { 
// 	// fd = open("tripouille", O_RDWR | O_CREAT, 0777);
// 	// ft_putnbr_fd(INT_MIN, fd);
// 	// lseek(fd, SEEK_SET, 0);
// 	// read(fd, s, 12);
// 	// /* 4 */ check(!strcmp(s, to_string(INT_MIN).c_str())); showLeaks();
// 	// close(fd);
// 	// unlink("./tripouille");
// }