/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:18:31 by llugez            #+#    #+#             */
/*   Updated: 2025/11/16 19:33:38 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	nb = 0;
	sign = 1;
	while (((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	int my_res = ft_atoi(argv[1]);
// 	int real_res = atoi(argv[1]);
// 	printf("mine : %d\n", my_res);
// 	printf("real : %d\n", real_res);
// }