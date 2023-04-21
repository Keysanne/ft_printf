/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:11:00 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/21 12:26:46 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char *s, va_list stk)
{
	int	i;

	i = 0;
	if (s[i] == 'd' || s[i] == 'i' || s[i] == 'u')
		ft_putnbr_fd(va_arg(stk, int), 1);
	else if (s[i] == 'c')
		ft_putchar_fd((char)va_arg(stk, int), 1);
	else if (s[i] == '%')
		write(1, "%", 1);
	else if (s[i] == 's')
		ft_putstr_fd(va_arg(stk, char *), 1);
	else if (s[i] == 'x')
		ft_putnbrbase_fd(va_arg(stk, int), 1, "0123456789abcdef");
	else if (s[i] == 'X')
		ft_putnbrbase_fd(va_arg(stk, int), 1, "0123456789ABCDEF");
	else
		return (1);
	return (0);
}
