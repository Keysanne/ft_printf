/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:25:36 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/21 14:48:32 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	char	*str;

	va_start(arg, s);
	str = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
			if (check_format(&str[i + 1], arg) == 0)
				i += 2;
		ft_putchar_fd(s[i++], 1);
	}
	va_end(arg);
	return (0);
}
/*
int	main()
{
	ft_printf("----------------------\n");
	ft_printf("t%cst%c d%c fou\n", 'e', '|', 'e');
	printf("t%cst%c d%c fou\n", 'e', '|', 'e');
	ft_printf("----------------------\n");
	ft_printf("test%% de%% fou%%\n");
	printf("test%% de%% fou%%\n");
	ft_printf("----------------------\n");
	ft_printf("test%d de fou\n", 2147483647);
	printf("test%d de fou\n", 2147483647);
	ft_printf("----------------------\n");
	ft_printf("test de fou %s\n", "malade de la mort");
	printf("test de fou %s\n", "malade de la mort");
	ft_printf("----------------------\n");
	ft_printf("test%i de fou\n", -50);
	printf("test%i de fou\n", -50);
	ft_printf("----------------------\n");
	ft_printf("test%u de fou\n", 260588260);
	printf("test%u de fou\n", 260588260);
	ft_printf("----------------------\n");
	ft_printf("test: %x\n", -2147483647);
	printf("test: %x\n", -2147483647);
	ft_printf("----------------------\n");
	ft_printf("test: %X\n", 123456);
	printf("test: %X\n", 123456);
	return (0);
}*/

//d et i | ft_putnbr_fd(va_arg(arg, int), 1)
//c | ft_putchar_fd((char)va_arg(arg, int), 1)
