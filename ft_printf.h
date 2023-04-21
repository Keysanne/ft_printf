/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:55:28 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/21 16:39:08 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int		check_format(char *s, va_list stk);
void	ft_putnbrbase_fd(int n, int fd, char *base);
size_t	ft_strlen(const char *s);
void	ft_putnbr_fd(int n, int fd);

#endif
