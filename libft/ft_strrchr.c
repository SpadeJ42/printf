/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 00:14:40 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/20 22:48:13 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (*s == (char)c)
		last = (char *)s;
	return (last);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "hello";

	printf("%s\n", ft_strrchr(str, 'e'));
	printf("%s\n", ft_strrchr(str, 'l'));
	printf("%s\n", ft_strrchr(str, '\0'));
	return (0);
}*/
