/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:01:45 by llugez            #+#    #+#             */
/*   Updated: 2025/11/16 19:35:14 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_casted;
	unsigned char	*s2_casted;

	i = 0;
	s1_casted = (unsigned char *)s1;
	s2_casted = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1_casted[i] == s2_casted[i])
		i++;
	return (s1_casted[i] - s2_casted[i]);
}

// int	main()
// {
// 	size_t n = 4;

// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};
// 	printf("La vrai : %d\n", memcmp(s, sCpy, n));
// 	printf("La Fausse : %d\n", ft_memcmp(s, sCpy, n));
// }
