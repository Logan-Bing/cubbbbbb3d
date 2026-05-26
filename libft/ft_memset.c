/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:46:04 by llugez            #+#    #+#             */
/*   Updated: 2025/11/12 00:56:25 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)pointer;
	i = 0;
	while (i < count)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (pointer);
}
/*
#define MAX_LINE 6
#define MAX_COLUMN 4
int main()
{
	int	testCaseProto[MAX_LINE][MAX_COLUMN] = 
	{
		{10, 20, 32, 40},
		{32, 4, -23, 10},
		{2, -4, -223, 110},
		{3332, 2224, -2113, 1220},
		{32222, 4222, -22223, 1220},
		{-32, -4, -23, -10},
	};

	int	testCaseReal[MAX_LINE][MAX_COLUMN] = 
	{
		{10, 20, 32, 40},
		{32, 4, -23, 10},
		{2, -4, -223, 110},
		{3332, 2224, -2113, 1220},
		{32222, 4222, -22223, 1220},
		{-32, -4, -23, -10},
	};

	int valueTab[] = {0, 3, 4 ,6, 7, 9}
}
*/ 