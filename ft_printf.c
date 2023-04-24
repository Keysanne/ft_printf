/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:25:36 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/24 16:05:58 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char s, va_list stk)
{
	int	i;

	i = 0;
	if (s == 'c')
		i = ft_putchar2_fd((char)va_arg(stk, int), 1);
	else if (s == 's')
		i = format_s(va_arg(stk, char *));
	else if (s == '%')
		i = ft_putchar2_fd('%', 1);
	else if (s == 'd' || s == 'i')
		i = format_d(va_arg(stk, int));
	else if (s == 'u')
		i = format_u(va_arg(stk, unsigned int));
	else if (s == 'x' || s == 'X')
		i = format_x(va_arg(stk, int), s);
	else if (s == 'p')
		i = format_p(stk);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		j;
	char	*str;

	va_start(arg, s);
	str = (char *)s;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			j += check_format(str[i + 1], arg);
			i += 2;
		}
		else
		{
			ft_putchar2_fd(s[i++], 1);
			j++;
		}
	}
	va_end(arg);
	return (j);
}
/*
int	main()
{
	ft_printf("%p", 0, 0);
	write(1, "\n", 1);
	printf("%p", 0, 0);
	return (0);
}*/
