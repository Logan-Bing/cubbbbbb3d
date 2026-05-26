/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:14:15 by llugez            #+#    #+#             */
/*   Updated: 2025/11/19 21:32:57 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strchr find the first occurence of c in *s
// need to cast c in unsigned char, so we can compare +256(int value)
// for exemple : int c ='t' + 256 casted in unsigned char == 't'
// beceause t == 116 so 116 + 256 = 372 || 372 % 256 = 116
// modulo 256 allow to keep only 8 last bit

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == uc)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && (unsigned char)c == 0)
		return ((char *)s);
	return (NULL);
}
// int	main()
// {
// 	char s[] = { (char)200, 0 };
// 	printf("%s\n", ft_strchr(s, 200));
// 	printf("%s\n", strchr(s, 200));
// }
