/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 21:17:15 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/16 23:38:13 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = 0;
	dst_len = 0;
	while (dst_len < dstsize && dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[20] = "hello ";
	char	dst2[20] = "hello ";

	size_t	ret1;
	size_t	ret2;

	ret1 = ft_strlcat(dst1, "world", sizeof(dst1));
	ret2 = strlcat(dst2, "world", sizeof(dst2));

	printf("ft: %s | %zu\n", dst1, ret1);
	printf("og: %s | %zu\n", dst2, ret2);

	char	dst[4] = {'a', 'b', 'c', 'd'};
	char	src[] = "hello";

	size_t	ret;

	ret = ft_strlcat(dst, src, 4);

	printf("ret = %zu\n", ret);

	printf("dst bytes: ");
	for (int i = 0; i < 4; i++)
		printf("%c ", dst[i]);
	printf("\n");

	return (0);
}*/
