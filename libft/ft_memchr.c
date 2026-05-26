/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:02:37 by llugez            #+#    #+#             */
/*   Updated: 2025/11/16 19:34:42 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == ptr[i])
			return (ptr + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	char *real_res = (char *)memchr(s, 2 + 256, 3);
// 	printf("%s\n", my_res);
// 	printf("%s\n", real_res);
// }
// memchr scan les n premiers bytes de l'adresse memoire s
// pour trouver la premiere instance de c 
// la zone en memoire pointer par s est consider comme un unsigned char