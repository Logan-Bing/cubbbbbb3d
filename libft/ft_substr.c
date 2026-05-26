/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:03:36 by llugez            #+#    #+#             */
/*   Updated: 2025/11/15 14:38:07 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*buffer;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (len > slen - start)
		len = slen - start;
	if (start >= slen)
		return (ft_strdup(""));
	i = 0;
	buffer = malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
	while (s[i] && i < len)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*
int main(void)
{
	
	char *res = ft_substr("tripouille", 1, 1);
	printf("%s", res);
	free(res);
}
*/