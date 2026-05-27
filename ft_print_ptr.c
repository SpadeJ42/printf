/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenxiaoyu <chenxiaoyu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 18:02:46 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/27 18:19:54 by chenxiaoyu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_hex_len(unsigned long n)
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

int	ft_print_ptr_hex(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_print_ptr_hex(n / 16);
	write(1, &base[n % 16], 1);
	return (ft_ptr_hex_len(n));
}

int	ft_print_ptr(void *ptr)
{
	if (ptr == NULL)
		return (ft_print_str(PTRNULL));
	write(1, "0x", 2);
	return (2 + ft_print_ptr_hex((unsigned long)ptr));
}
