/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:39:00 by llugez            #+#    #+#             */
/*   Updated: 2025/11/18 21:26:45 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

// int	main()
// {
// 	t_list *node = ft_lstnew("hello les gens");
// 	printf("%s\n", (char *)node->content);
// 	ft_lstdelone(node, free);
// 	printf("%s\n", (char *)node->content);
// }