/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:51:47 by llugez            #+#    #+#             */
/*   Updated: 2025/11/18 16:07:31 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// void	print_list(t_list *lst)
// {
// 	t_list *current_node = lst;
// 	while (current_node != NULL)
// 	{
// 		printf("%s\n", (char *)current_node->content);
// 		current_node = current_node->next;
// 	}
// }

// int	main()
// {
// 	t_list *list = NULL;

// 	t_list *node_1 = ft_lstnew("node 1");
// 	t_list *node_2 = ft_lstnew("node 2");
// 	t_list *node_3 = ft_lstnew("node 3");
// 	ft_lstadd_front(&list, node_3);
// 	ft_lstadd_front(&list, node_2);
// 	ft_lstadd_front(&list, node_1);
// 	print_list(list);
// }