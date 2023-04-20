/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:25:36 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/20 17:21:28 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int	i;
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

int	main()
{
	ft_printf("----------------------\n");
	ft_printf("test%c de fou\n", 'e');
	printf("test%c de fou\n", 'e');
	ft_printf("----------------------\n");
	ft_printf("test%% de fou\n");
	printf("test%% de fou\n");
	ft_printf("----------------------\n");
	ft_printf("test%d de fou\n", 2);
	printf("test%d de fou\n", 2);
	ft_printf("----------------------\n");
	ft_printf("test de fou %s\n", "malade");
	printf("test de fou %s\n", "malade");
	ft_printf("----------------------\n");
	ft_printf("test%i de fou\n", 50);
	printf("test%i de fou\n", 50);
	ft_printf("----------------------\n");
	ft_printf("test%u de fou\n", 260588259);
	printf("test%u de fou\n", 260588259);
	ft_printf("----------------------\n");
	return (0);
}


//d et i | ft_putnbr_fd(va_arg(arg, int), 1)
//c | ft_putchar_fd((char)va_arg(arg, int), 1)
