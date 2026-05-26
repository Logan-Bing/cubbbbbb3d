/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:25:46 by llugez            #+#    #+#             */
/*   Updated: 2025/11/19 22:44:31 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_test(void *content)
// {
// 	int len = ft_strlen((const char *)content);
// 	char *uc_content = malloc(len + 1);
// 	if (!uc_content)
// 		return (NULL);
// 	int i = 0;
// 	while (i < len)
// 	{
// 		uc_content[i] = 'a';
// 		i++;
// 	}
// 	uc_content[i] = '\0';
// 	return (uc_content);
// }

// void	del(void *content)
// {
// 	free(content);
// }
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_lst;
// 	t_list	*new_node;

// 	new_lst = NULL;
// 	while (lst != NULL)
// 	{
// 		new_node = ft_lstnew(f(lst->content));
// 		if (!new_node)
// 		{
// 			ft_lstclear(&new_lst, del);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&new_lst, new_node);
// 		lst = lst->next;
// 	}
// 	return (new_lst);
// }

// void	print_list(t_list *lst)
// {
// 	while (lst != NULL)
// 	{
// 		printf("[%s] ", (char *)lst->content);
// 		printf("\n");
// 		lst = lst->next;
// 	}
// }

// int main ()
// {
// 	t_list *lst = NULL;
// 	t_list *node_1 = ft_lstnew(strdup("the first node : Hello"));
// 	t_list *node_2 = ft_lstnew(strdup("the seconde node : Hello"));
// 	t_list *node_3 = ft_lstnew(strdup("the third node : Hello"));
// 	ft_lstadd_front(&lst, node_3);
// 	ft_lstadd_front(&lst, node_2);
// 	ft_lstadd_front(&lst, node_1);
// 	printf("==== AVANT ====-\n");
// 	print_list(lst);
// 	printf("\n");
// 	t_list *new_lst = ft_lstmap(lst, ft_test, free);
// 	printf("==== APRES ==== \n");
// 	print_list(new_lst);
// 	ft_lstclear(&new_lst, del);
// 	ft_lstclear(&lst, del);
// }