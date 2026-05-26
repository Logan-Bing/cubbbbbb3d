/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:54:08 by llugez            #+#    #+#             */
/*   Updated: 2025/11/16 19:33:57 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	get_allocate_size(long int ln)
{
	long int	size;

	size = 0;
	if (ln < 0)
	{
		size++;
		ln = -ln;
	}
	if (ln == 0)
		return (1);
	while (ln > 0)
	{
		ln = ln / 10;
		size ++;
	}
	return (size);
}

// caste in long int for manage INT_MIN
char	*ft_itoa(int n)
{
	long int	ln;
	char		*buffer;
	int			al_size;

	ln = (long int)n;
	al_size = get_allocate_size(ln);
	buffer = (char *)malloc(sizeof(char) * al_size + 1);
	if (!buffer)
		return (NULL);
	if (ln < 0)
	{
		ln = -ln;
		buffer[0] = '-';
	}
	buffer[al_size] = '\0';
	al_size--;
	while (ln > 9)
	{
		buffer[al_size] = (ln % 10) + '0';
		al_size--;
		ln = ln / 10;
	}
	buffer[al_size] = ln + '0';
	return (buffer);
}

// int	main()
// {
// 	char *res = ft_itoa(-323);
// 	printf("%s", res);
// }
