/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:55:28 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/15 17:00:54 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii(1200));
	return (0);
}*/
