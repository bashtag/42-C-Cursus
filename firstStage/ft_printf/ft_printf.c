/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgokce <bgokce@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:48:27 by bgokce            #+#    #+#             */
/*   Updated: 2022/10/21 19:27:40 by bgokce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_print_formatter(const char *str, size_t i, va_list arg_list)
{
	char	ch;
	size_t	len;

	len = 0;
	if (str[i + 1] == 'c')
	{
		ch = va_arg(arg_list, int);
		len += write(1, &ch, 1);
	}
	else if (str[i + 1] == 's')
		len += ft_putstr(va_arg(arg_list, char *));
	else if (str[i + 1] == 'p')
		len += ft_putmem(va_arg(arg_list, unsigned long long));
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		len += ft_putnbr(va_arg(arg_list, int));
	else if (str[i + 1] == 'u')
		len += ft_uputnbr(va_arg(arg_list, unsigned int));
	else if (str[i + 1] == 'x')
		len += ft_hexputnbr(va_arg(arg_list, unsigned int), 0);
	else if (str[i + 1] == 'X')
		len += ft_hexputnbr(va_arg(arg_list, unsigned int), 1);
	else if (str[i + 1] == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	va_start(arg_list, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_print_formatter(str, i++, arg_list);
		else
			len += write(1, &str[i], 1);
		i++;
	}
	return (len);
}
