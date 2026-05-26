/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:09:25 by llugez            #+#    #+#             */
/*   Updated: 2025/11/18 16:14:49 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current_node;

	count = 0;
	current_node = lst;
	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}

// int	main()
// {
// 	t_list *list = NULL;

// 	t_list *node_1 = ft_lstnew("node 1");
// 	t_list *node_2 = ft_lstnew("node 2");
// 	t_list *node_3 = ft_lstnew("node 3");
// 	ft_lstadd_front(&list, node_3);
// 	ft_lstadd_front(&list, node_2);
// 	ft_lstadd_front(&list, node_1);
// 	printf("%d", ft_lstsize(list));
// }