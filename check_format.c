/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:11:00 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/20 17:19:21 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	else
		return (1);
	return (0);
}
