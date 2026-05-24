/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:28:38 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/21 16:38:32 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*str;

	str = ft_strtrim("+++sleepy+++", "+");
	printf("%s\n", str);
	free(str);

	str = ft_strtrim("  \nenergy\t ", " \n\t");
	printf("%s\n", str);
	free(str);

	str = ft_strtrim("++++", "+");
	printf("%s\n", str);
	free(str);

	return (0);
}*/
