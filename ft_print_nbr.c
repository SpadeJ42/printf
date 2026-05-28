/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaochen <xiaochen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 21:34:40 by xiaochen          #+#    #+#             */
/*   Updated: 2026/05/28 20:23:24 by xiaochen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

int	ft_nbrlen(long n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n <= -10 || n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_print_nbr(int n)
{
	long	nb;
	int		len;
	char	c;

	nb = n;
	len = ft_nbrlen(nb);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_print_nbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
	return (len);
}
