/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:55:28 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/24 16:06:09 by tbatteux         ###   ########.fr       */
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
int		ft_putchar2_fd(char c, int fd);
int		format_s(char *str);
int		format_d(int nb);
int		format_u(unsigned int nb);
int		format_x(int nb, char s);
int		format_p(va_list stk);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbrbase_fd(int n, int fd, char *base, int *i);
size_t	ft_strlen(const char *s);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
void	ft_putnbrunsigned(unsigned int nb, int *i);
void	ft_putnbradress(unsigned long n, char *base, int *i);

#endif
