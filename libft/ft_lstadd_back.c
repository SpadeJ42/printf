/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 15:22:38 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/22 15:25:08 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}
/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew("T");
	b = ft_lstnew("A");
	c = ft_lstnew("T");

	a->next = b;

	ft_lstadd_back(&a, c);

	printf("%s\n", (char *)a->content);
	printf("%s\n", (char *)a->next->content);
	printf("%s\n", (char *)a->next->next->content);

	return (0);
}*/
