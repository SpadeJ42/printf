/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:47:55 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/15 16:54:21 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalnum('?'));
	printf("%d\n", ft_isalnum('3'));
	printf("%d\n", ft_isalnum('A'));
	return (0);
}*/
