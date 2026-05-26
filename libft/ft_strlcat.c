/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:43:06 by llugez            #+#    #+#             */
/*   Updated: 2025/11/16 19:38:14 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		len_dest;
	size_t		len_src;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (len_dest > n || n == 0)
		return (len_src + n);
	while (src[i] && len_dest + i < n - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

// int	main()
// {
// 	// write(1, "\n", 1);
// 	char dest[10];
// 	char res = ft_strlcat(dest ,"123", 0);
// 	printf("%s\n", dest);
// 	printf("%d", res);
//    return(0);
// }
