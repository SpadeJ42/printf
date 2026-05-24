/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:48:57 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/20 23:47:02 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j]
			&& haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "hello world";

	printf("test 1:\n");
	printf("ft : %s\n", ft_strnstr(str, "world", 11));
	printf("og : %s\n\n", strnstr(str, "world", 11));

	printf("test 2:\n");
	printf("ft : %s\n", ft_strnstr(str, "world", 8));
	printf("og : %s\n\n", strnstr(str, "world", 8));

	printf("test 3:\n");
	printf("ft : %s\n", ft_strnstr(str, "hello", 5));
	printf("og : %s\n\n", strnstr(str, "hello", 5));

	printf("test 4:\n");
	printf("ft : %s\n", ft_strnstr(str, "", 5));
	printf("og : %s\n\n", strnstr(str, "", 5));

	return (0);
}*/
