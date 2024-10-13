/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <sjuan-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:19:00 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/10/02 12:07:39 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

// int	ft_putchar(char c);
// int	ft_putstr(char *str);

// PRINTF
int	ft_printf(char const *str, ...);
int	check_letter(char letter, va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_hexa_min(unsigned int x);
int	ft_hexa_mayus(unsigned int X);
int	ft_put_ptr(void *ptr);
int	ft_hexa_min_ptr(unsigned long x);

#endif