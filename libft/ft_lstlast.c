/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 15:25:43 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/22 15:27:10 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*last;

	a = ft_lstnew("O");
	b = ft_lstnew("M");
	c = ft_lstnew("G");

	a->next = b;
	b->next = c;

	last = ft_lstlast(a);

	printf("%s\n", (char *)last->content);

	return (0);
}*/
