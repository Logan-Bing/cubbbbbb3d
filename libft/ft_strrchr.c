/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:37:12 by llugez            #+#    #+#             */
/*   Updated: 2025/11/16 16:32:14 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	uc;

	len = ft_strlen(s);
	uc = (unsigned char)c;
	if (s[len] == '\0' && c == 0)
	{
		return ((char *)s + len);
		len--;
	}
	while (len >= 0)
	{
		if ((unsigned char)s[len] == uc)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
/*
#define MAX_STR 100
#define MAX_LINE 5
int	main()
{
	char testCase[MAX_LINE][MAX_STR] = 
	{
		"; aooko efefe",
		" Vous ne passerez pas",
		"hello || les gens",
		"Trouv",
		""
	};
	char *toFind = "; |v,";
	char *my_res;
	char *real_res;
	for (int i = 0; i < MAX_LINE; i++) 
	{
		my_res = ft_strrchr(testCase[i], toFind[i]);
		real_res = strrchr(testCase[i], toFind[i]);
		printf("[%s]", my_res);
		printf("-----");
		printf("[%s]", real_res);
		if (my_res != real_res)
			printf(" == False");
		else
			printf(" == OK");
		printf("\n");
	}
}
*/