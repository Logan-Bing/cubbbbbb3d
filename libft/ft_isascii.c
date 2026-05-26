/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:49:57 by llugez            #+#    #+#             */
/*   Updated: 2025/11/12 22:50:59 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int main() 
{
	unsigned char sentence[255];

	
	int i = 0;
	int my_res = 0;
	int real_res = 0;
	printf("=== LA MIENNE ===\n");
	while (i < 255)
	{
		sentence[i] = i;
		my_res = ft_isascii(sentence[i]);
		real_res = isascii(sentence[i]);
		if (my_res != real_res)
		{
			printf("[%d]", my_res);
			printf("[%d] === FALSE\t", real_res);
			printf("value : %c", sentence[i]);
		} else 
		{
			printf("[%d]", my_res);
			printf("[%d] === OK\t", real_res);
			printf("value : %c", sentence[i]);
		}
		printf("\n");
		i++;
	}
}
*/