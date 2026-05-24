/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:37:18 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/20 22:48:01 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		n--;
		p1++;
		p2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	char	s3[] = "helloo";
	char	s4[] = "heppaaa";

	printf("same:\n");
	printf("ft_memcmp = %d\n", ft_memcmp(s1, s2, 5));
	printf("memcmp    = %d\n\n", memcmp(s1, s2, 5));

	printf("different:\n");
	printf("ft_memcmp = %d\n", ft_memcmp(s1, s3, 5));
	printf("memcmp    = %d\n\n", memcmp(s1, s3, 5));

	printf("another diff:\n");
	printf("ft_memcmp = %d\n", ft_memcmp(s1, s4, 5));
	printf("memcmp    = %d\n\n", memcmp(s1, s4, 5));

	printf("n = 0:\n");
	printf("ft_memcmp = %d\n", ft_memcmp(s1, s4, 0));
	printf("memcmp    = %d\n", memcmp(s1, s4, 0));

	return (0);
}*/
