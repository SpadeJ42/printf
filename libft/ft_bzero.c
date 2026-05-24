/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 19:13:31 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/16 19:22:50 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[]="sleepy";

	printf("before:%s\n", str);
	ft_bzero(str, 4);
	printf("after:%c\n", str[4]);
	return (0);
}*/
