/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:50:05 by llugez            #+#    #+#             */
/*   Updated: 2025/11/15 12:27:17 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int main() 
{
	unsigned char sentence[255];

	int i = 0;
	int my_res = 0;
	int real_res = 0;
	while (i < 255)
	{
		sentence[i] = i;
		my_res = ft_isprint(sentence[i]);
		real_res = isprint(sentence[i]);
		if (my_res != real_res)
		{
			printf("[%d]", my_res);
			printf("[%d] === FALSE\t", real_res);
			printf("value : %c [%d]", sentence[i], i);
		} else 
		{
			printf("[%d]", my_res);
			printf("[%d] === OK\t", real_res);
			printf("value : %c [%d]", sentence[i], i);
		}
		printf("\n");
		i++;
	}
}
*/