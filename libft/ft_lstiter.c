/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 22:24:38 by llugez            #+#    #+#             */
/*   Updated: 2025/11/19 17:17:19 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_putstr(void *content)
// {
// 	char *str = (char *)content;
// 	printf("%s\n", str);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// int	main()
// {
// 	char *first_content = strdup("node 1");
// 	char *second_content = strdup("node 2");
// 	char *third_content = strdup("node 3");
// 	t_list *list = NULL;
// 	t_list *node_1 = ft_lstnew(first_content);
// 	t_list *node_2 = ft_lstnew(second_content);
// 	t_list *node_3 = ft_lstnew(third_content);
// 	ft_lstadd_front(&list, node_3);
// 	ft_lstadd_front(&list, node_2);
// 	ft_lstadd_front(&list, node_1);
// 	ft_lstiter(list, ft_putstr);
// }