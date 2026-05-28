/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaochen <xiaochen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 02:35:48 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/28 20:23:52 by xiaochen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_check_format(format[i], args);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	int	x;
	int	real;
	int	mine;

	real = printf("real: %p\n", &x);
	mine = ft_printf("mine: %p\n", &x);

	printf("real return: %d\n", real);
	printf("mine return: %d\n", mine);

	printf("\n");

	real = printf("real NULL: %p\n", NULL);
	mine = ft_printf("mine NULL: %p\n", NULL);

	printf("real return: %d\n", real);
	printf("mine return: %d\n", mine);

	return (0);
}
{
	printf("REAL:\n");
	printf("%u\n", -1);
	printf("%x\n", 0);
	printf("%c\n", '\0');

	printf("\nMINE:\n");
	ft_printf("%u\n", -1);
	ft_printf("%x\n", 0);
	ft_printf("%c\n", '\0');

	return (0);
}*/
