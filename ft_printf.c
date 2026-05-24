/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 02:35:48 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/24 14:02:17 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_check_format(format[i]);
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("test%%\n");
	ft_printf("test%%\n");
	return (0);
}
