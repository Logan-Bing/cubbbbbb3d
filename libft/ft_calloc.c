/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:42:58 by llugez            #+#    #+#             */
/*   Updated: 2025/11/15 13:28:41 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	size_t			size;
	void			*buffer;

	size = elementCount * elementSize;
	if (elementCount != 0 && size / elementCount != elementSize)
		return (NULL);
	buffer = malloc(size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size);
	return (buffer);
}
/*
int	main()
{
	// int test[] = {10, 20, 5, 1, 3};
	// int *real_tab;
	// int *my_tab;
	// for (int i = 0; i < 5; i++) {
	// 	real_tab = calloc(test[i], sizeof(int));
	// 	my_tab = calloc(test[i], sizeof(int));
	// 	int cmp = memcmp(real_tab, my_tab, sizeof(int) * test[i]);
	// 	if (cmp != 0)
	// 		printf("False");
	// 	else 
	// 		printf("True");
	// 	printf("\n");
	// }

	int *test = calloc(-1, 0);
	printf("%p\n", test);
	free(test);
	printf("%p", test);
}
*/