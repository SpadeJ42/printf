/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaochen <xiaochen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 02:14:31 by chenxiaoyu        #+#    #+#             */
/*   Updated: 2026/05/24 22:46:31 by xiaochen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

# if defined (__linux__)
#  define PTRNULL "(nil)"
# elif defined (__APPLE__)
#  define PTRNULL "0x0"
# endif

int ft_printf(const char *format, ...);
int ft_check_format(char c, va_list args);
int ft_print_char(int c);
int ft_print_str(char *str);
int ft_print_nbr(int n);
int	ft_print_unsigned(unsigned int n);

/* Helper Functions */
int ft_nbrlen(int n);
int	ft_unsigned_len(unsigned int n);

#endif
