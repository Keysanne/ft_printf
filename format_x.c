/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:37:02 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/24 16:05:20 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_x(int nb, char s)
{
	int	i;

	i = 0;
	if (s == 'x')
		ft_putnbrbase_fd(nb, 1, "0123456789abcdef", &i);
	else if (s == 'X')
		ft_putnbrbase_fd(nb, 1, "0123456789ABCDEF", &i);
	return (i);
}
