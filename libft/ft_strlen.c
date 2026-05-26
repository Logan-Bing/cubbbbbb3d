/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:36:43 by llugez            #+#    #+#             */
/*   Updated: 2025/11/12 14:48:03 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#define MAXSTR 10
#define MAXLEN 1024
int main()
{
	int i = 0;
	int my_res = 0;
	int real_res = 0;
	char testCase[MAXSTR][MAXLEN] = {
		"this is the first string",
		"this is the second sting",
		"\n",
		"     exemple",
		"42",
		"weqeqweqweqweqweqweqweqeqweqeweqweqweqweqweqweqweqeqw",
	};

	while (i < 6)
	{
		my_res = ft_strlen(testCase[i]);
		real_res = strlen(testCase[i]);
		if (my_res != real_res)
		{
			printf("[%d]", my_res);
			printf("[%d] === FALSE\t", real_res);
		} else 
		{
			printf("[%d]", my_res);
			printf("[%d] === OK\t", real_res);
		}
		printf("\n");
		i++;
	}
}
*/