/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:15:16 by llugez            #+#    #+#             */
/*   Updated: 2025/11/13 14:58:16 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (n == 0)
		return (len);
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#define MAXSTR 6
#define MAXLEN 1024
int main()
{
	int i = 0;
	int my_res = 0;
	int real_res = 0;
	char destProto[100];
	char destReal[100];
	char testCase[MAXSTR][MAXLEN] = {
		"this is the first string",
		"this is the second sting",
		"hello",
		"     exemple",
		"42",
		"weqeqweqweqweqweqweqweqeqweqeweqweqweqweqweqweqweqeqw",
	};
	
	int sizeTab[] = {5, 2, 0, 10, 20, -14};

	while (i < MAXSTR)
	{
		my_res = ft_strlcpy(destProto, testCase[i], sizeTab[i]);
		real_res = strlcpy(destReal, testCase[i], sizeTab[i]);
		printf("[%d]", my_res);
		printf("[%s]", destProto);
		printf("-----");
		printf("[%d]", real_res);
		printf("[%s]", destReal);
		if (my_res != real_res || strcmp(destProto, destReal) != 0)
			printf(" == False");
		else
			printf(" == OK");
		printf("\n");
		i++;
	}
}
*/