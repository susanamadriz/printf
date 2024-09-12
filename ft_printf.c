/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuan-ma <sjuan-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:18:40 by sjuan-ma          #+#    #+#             */
/*   Updated: 2024/09/12 12:12:25 by sjuan-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_letter(char letter, va_list args)
{
	if (letter == '%')
		return (ft_putchar('%'));
	if (letter == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (letter == 's')
		return (ft_putstr(va_arg(args, char *)));
	// if (letter == p)
	// 	return ();
	// if (letter == d || letter == i)
	// 	return ();
	// if (letter == u)
	// 	return ();
	// if (letter == x)
	// 	return ();
	// if (letter == X)
	// 	return ();
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int 	len;
	
	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += check_letter(str[i], args);
		}
		else
		{
		len += ft_putchar(str[i]);	
		}
		i++;
	}
	va_end(args);
	return (len);
}
int main()
{
	char *prueba = "hello kitty";
	
	ft_printf("me gusta %s\n", prueba);
	return (0);
}