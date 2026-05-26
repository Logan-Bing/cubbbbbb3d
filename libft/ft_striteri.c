/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:52:18 by llugez            #+#    #+#             */
/*   Updated: 2025/11/19 17:19:53 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	change_char(unsigned int index, char *c)
// {
// 	if (index % 2 == 0)
// 		*c = 'a';
// }
// int	main()
// {
// 	char test[] = "hello les gens";
// 	printf("%s\n", test);
// 	ft_striteri(test, change_char);
// 	printf("%s", test);
// }