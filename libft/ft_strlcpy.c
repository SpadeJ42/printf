/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 20:51:40 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/16 21:11:38 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[10];
	char	dst2[10];
	size_t	ret1;
	size_t	ret2;

	ret1 = ft_strlcpy(dst1, "sleepy", sizeof(dst1));
	ret2 = strlcpy(dst2, "sleepy", sizeof(dst2));

	printf("ft_strlcpy:\n");
	printf("dst1 = %s\n", dst1);
	printf("ret1 = %zu\n\n", ret1);

	printf("original strlcpy:\n");
	printf("dst2 = %s\n", dst2);
	printf("ret2 = %zu\n\n", ret2);

	return (0);
}*/
