/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:44:10 by llugez            #+#    #+#             */
/*   Updated: 2025/11/12 14:51:25 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*buffer;
	size_t	len_s1;
	size_t	len_s2;
	size_t	total_len;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total_len = len_s1 + len_s2;
	buffer = malloc(sizeof(char) * total_len + 1);
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, (char *)s1, len_s1 + 1);
	ft_strlcat(buffer, s2, total_len + 1);
	return (buffer);
}

// int	main()
// {
// 	char prefix[] = "hel";
// 	char suffix[] = "     wdokwopdkoales gens";
// 	char *res;
// 	res = ft_strjoin(prefix, suffix);
// 	printf("%s", res);
// }