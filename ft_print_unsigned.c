/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaochen <xiaochen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 22:38:49 by xiaochen          #+#    #+#             */
/*   Updated: 2026/05/24 22:46:36 by xiaochen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
    char    c;

    if (n >= 10)
        ft_print_unsigned(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
    return (ft_unsigned_len(n));
}