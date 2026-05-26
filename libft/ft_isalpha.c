/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:49:51 by llugez            #+#    #+#             */
/*   Updated: 2025/11/11 13:11:35 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));
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
		my_res = ft_isalpha(sentence[i]);
		real_res = isalpha(sentence[i]);
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