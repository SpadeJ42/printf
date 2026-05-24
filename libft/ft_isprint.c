/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:03:37 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/15 17:08:31 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(16));
	return (0);
}*/
