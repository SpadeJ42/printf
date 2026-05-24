/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 15:02:48 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/22 15:16:12 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*newnode;

	head = ft_lstnew("world");
	newnode = ft_lstnew("byebye");

	ft_lstadd_front(&head, newnode);

	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);

	return (0);
}*/
