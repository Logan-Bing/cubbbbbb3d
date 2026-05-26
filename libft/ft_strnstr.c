/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:06:00 by llugez            #+#    #+#             */
/*   Updated: 2025/11/16 19:39:13 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	int		little_len;

	i = 0;
	little_len = ft_strlen((char *)little) - 1;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (little[j] == big[i + j] && i + j < len)
		{
			if (j == little_len)
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int	main()
{
	char *sentence = "hello les amis ca va";
	char *word = "\0";
	size_t len = -14;
	char *res = ft_strnstr(sentence, word, len);
	char *res2 = strnstr(sentence, word, len);
	
	printf("RES = %s\n", res);
	printf("RES2 = %s\n", res2);
	


	// char *tab[] = {
	// 	"coucou les salopes",
	// 	"coucou salopes",
	// 	"",
	// 	"salopes",
	// };

	// char *to_find[] = {
	// 	"les",
	// 	NULL,
	// 	"salopes",
	// 	"zob",
	// };

	// int int_arr[] = {
	// 	3 , 6, 14, -12, 0
	// };

	// char *res;
	// int i;
	// int j;
	// int k;
	// i = 0;
	// while (i < 4)
	// {
	// 	j = 0;
	// 	while (j < 4)
	// 	{
	// 		k = 0;
	// 		while (k < 5 )
	// 		{
	// 			res = ft_strnstr(tab[i], to_find[j], int_arr[k]);
	// 			printf("RES = %s \n", res);
	// 			k++;
	// 		}
	// 		printf("\n");
	// 		j++;
	// 	}
	// 	i++;
	// }
}
*/