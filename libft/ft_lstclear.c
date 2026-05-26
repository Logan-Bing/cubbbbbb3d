/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:28:22 by llugez            #+#    #+#             */
/*   Updated: 2025/11/18 22:20:46 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*tmp;

	current_node = *lst;
	while (current_node != NULL)
	{
		tmp = current_node->next;
		del(current_node->content);
		free(current_node);
		current_node = tmp;
	}
	*lst = NULL;
}

// int	main()
// {
// 	char *first_content = strdup("node 1");
// 	char *second_content = strdup("node 1");
// 	char *third_content = strdup("node 1");
// 	t_list *list = NULL;
// 	t_list *node_1 = ft_lstnew(first_content);
// 	t_list *node_2 = ft_lstnew(second_content);
// 	t_list *node_3 = ft_lstnew(third_content);
// 	ft_lstadd_front(&list, node_3);
// 	ft_lstadd_front(&list, node_2);
// 	ft_lstadd_front(&list, node_1);
// 	print_list(list);
// 	ft_lstclear(&list, del);
// 	printf("%d", list == NULL);
// }