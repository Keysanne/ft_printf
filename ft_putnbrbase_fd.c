/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:40:31 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/14 10:50:47 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrbase_fd(int n, int fd, char *base)
{
	unsigned int	nb;

	nb = n;
	if (nb < 16)
		ft_putchar_fd(base[nb], fd);
	if (nb >= 16)
	{
		ft_putnbrbase_fd(nb / 16, fd, base);
		ft_putnbrbase_fd(nb % 16, fd, base);
	}
}
