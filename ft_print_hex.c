/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:05:47 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/27 17:51:30 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_print_hex(unsigned int n, char *base)
{
	if (n >= 16)
		ft_print_hex(n / 16, base);
	write(1, &base[n % 16], 1);
	return (ft_hex_len(n));
}
