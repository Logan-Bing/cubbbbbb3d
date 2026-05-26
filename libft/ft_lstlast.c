/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:16:35 by llugez            #+#    #+#             */
/*   Updated: 2025/11/18 21:29:55 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_node;

	if (!lst)
		return (0);
	current_node = lst;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	return (current_node);
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
// 	t_list *last_node = ft_lstlast(list);
// 	printf("%s", (char *)last_node->content);
// }