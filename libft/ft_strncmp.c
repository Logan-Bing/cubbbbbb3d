/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:50:29 by llugez            #+#    #+#             */
/*   Updated: 2025/11/16 19:38:35 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((s1[i] != '\0' && s2[i] != '\0') && (i < n - 1)))
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// int	main()
// {
// 	size_t size = 1;
// 	char s1[] = { (char)200, 0 };
// 	char s2[] = { (char)200, 0 };
// 	int real_res = strncmp(s1, s2, size);
// 	int my_res = ft_strncmp(s1, s2, size);
// 	printf("%d\n", real_res);
// 	printf("%d\n", my_res);
// }