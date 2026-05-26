/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:49:37 by llugez            #+#    #+#             */
/*   Updated: 2025/11/13 15:06:23 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
void	print_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d -", tab[i]);
		i++;
	}
	printf("\n");
}
int	main()
{
	char buffer[10];

	ft_bzero(buffer, 5);
	printf("=== La mienne ===\n");
	for (int i = 0; i < 10; i++){
		printf("%c", buffer[i]);
	}
	printf("\n");
	bzero(buffer, 5);
	printf("=== La Vrai ===\n");
	for (int i = 0; i < 10; i++){
		printf("%c", buffer[i]);
	}
}
*/