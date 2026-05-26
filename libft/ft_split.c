/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:47:46 by llugez            #+#    #+#             */
/*   Updated: 2025/11/22 13:42:04 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == c)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		count++;
		while (str[i] && str[i] == c)
			i++;
	}
	return (count);
}

static char	*ft_allocword(const char *str, char c)
{
	int		len;
	int		i;
	char	*buffer;

	len = 0;
	i = 0;
	while (str[len] && str[len] != c)
		len++;
	buffer = malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
	while (str[i] && str[i] != c)
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

// static char	**handle_ptr(void)
// {
// 	char	**buffer;

// 	buffer = malloc(sizeof(char *));
// 	if (!buffer)
// 		return (NULL);
// 	buffer[0] = NULL;
// 	return (buffer);
// }

void	*free_tab(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(const char *s1, char c)
{
	int		i;
	char	**buffer;

	i = 0;
	buffer = malloc(sizeof(char *) * (count_word(s1, c) + 1));
	if (!buffer)
		return (NULL);
	while (*s1)
	{
		if (*s1 != c)
		{
			buffer[i] = ft_allocword(s1, c);
			if (!buffer[i])
				return (free_tab(buffer, i));
			i++;
			while (*s1 && *s1 != c)
				s1++;
		}
		while (*s1 && *s1 == c)
			s1++;
	}
	buffer[i] = NULL;
	return (buffer);
}

// int	main() {
// 	char **tab = ft_split(NULL, ' ');
// 	free(tab);
// }
