/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:34:48 by llugez            #+#    #+#             */
/*   Updated: 2025/11/13 18:48:06 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*buffer;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	buffer = malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
	while (s[i])
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
// char	change_char(unsigned int index, char c)
// {
// 	if (index % 2 == 0)
// 		return c;
// 	return 'a';
// }
// int	main ()
// {
// 	char *test = "hello les gens";
// 	char *res = ft_strmapi(test, change_char);
// 	printf("%s", res);
// }