/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:46:54 by llugez            #+#    #+#             */
/*   Updated: 2025/11/13 15:19:20 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
/*
int	main()
{
	unsigned char sentence[255];

	int i = 0;
	int my_res = 0;
	int real_res = 0;
	printf("=== LA MIENNE ===\n");
	while (i < 255)
	{
		sentence[i] = i;
		my_res = ft_toupper(sentence[i]);
		real_res = toupper(sentence[i]);
		if (my_res != real_res)
		{
			printf("[%d]", my_res);
			printf("[%d] === FALSE", real_res);
		} else 
		{
			printf("[%d]", my_res);
			printf("[%d] === OK", real_res);
		}
		printf("\n");
		i++;
	}
}
*/