/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:28:17 by llugez            #+#    #+#             */
/*   Updated: 2025/11/19 21:02:32 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}
// void	print_list(t_list *lst)
// {
// 	while (lst != NULL)
// 	{
// 		printf("[%s] ", (char *)lst->content);
// 		printf("\n");
// 		lst = lst->next;
// 	}
// }

// int	main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_back(&list, ft_lstnew(strdup("node_1")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("node_2")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("node_3")));
// 	print_list(list);
// 	ft_lstclear(&list, free);
// }