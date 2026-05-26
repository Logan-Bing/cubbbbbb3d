/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:52:31 by llugez            #+#    #+#             */
/*   Updated: 2025/11/15 19:53:19 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	get_starting_index(const char *s1, const char *set)
{
	int		i;

	i = 0;
	while (s1[i] && is_sep(s1[i], set))
		i++;
	if (s1[i] && !is_sep(s1[i], set))
		return (i);
	return (-1);
}

static int	get_last_index(const char *s1, const char *set)
{
	int	len;

	len = ft_strlen(s1) - 1;
	while (len > 0 && is_sep(s1[len], set))
		len--;
	if (len >= 0 && !is_sep(s1[len], set))
		return (len);
	else
		return (-1);
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*buffer;
	int		i;
	int		start;
	int		last;

	i = 0;
	start = get_starting_index(s1, set);
	last = get_last_index(s1, set);
	if (start == -1 || last == -1)
		return (ft_strdup(""));
	buffer = malloc(last - start + 2);
	if (!buffer)
		return (NULL);
	while (start <= last)
	{
		buffer[i] = s1[start];
		i++;
		start++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/*
int main ()
{
	char *res = ft_strtrim("abcdef", "abf");
	printf("%s", res);
}
*/