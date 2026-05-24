/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 00:16:17 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/22 00:18:44 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	test(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = *c - 32;
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "sleepy";

	ft_striteri(str, test);
	printf("%s\n", str);
}*/
