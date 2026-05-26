/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:46:53 by llugez            #+#    #+#             */
/*   Updated: 2025/11/15 13:31:08 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	int		i;
	char	*buffer;

	i = 0;
	len = ft_strlen(str);
	buffer = malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
	while (str[i])
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*
int	main()
{
	char *word = "hello";
	char *res = ft_strdup(word);
	printf("%s\n", res);
}
*/