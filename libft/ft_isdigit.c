/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:50:02 by llugez            #+#    #+#             */
/*   Updated: 2025/11/11 13:16:17 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
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
		my_res = ft_isdigit(sentence[i]);
		real_res = isdigit(sentence[i]);
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