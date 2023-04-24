/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:58:39 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/24 16:05:46 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*fin(char *new)
{
	int		i;
	char	*final;

	i = ft_strlen(new);
	final = malloc ((i + 1) * sizeof(char));
	if (!final)
		return (NULL);
	i = -1;
	while (new[++i])
		final[i] = new[i];
	final[i] = 0;
	return (final);
}

char	*ft_itoa(int n)
{
	int		i;
	int		max;
	char	str[12];

	max = 1000000000;
	i = 0;
	if (n == 0)
		return (fin("0"));
	if (n < 0)
	{
		if (n == -2147483648)
			return (fin("-2147483648"));
		str[i++] = '-';
		n = -n;
	}
	while (n / max == 0)
		max /= 10;
	while (max >= 1)
	{
		str[i++] = (n / max) + '0';
		n -= (n / max) * max;
		max /= 10;
	}
	str[i] = 0;
	return (fin(str));
}
/*
int	main()
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}*/
