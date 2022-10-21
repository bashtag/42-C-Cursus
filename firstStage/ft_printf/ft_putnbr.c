/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgokce <bgokce@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:14:52 by bgokce            #+#    #+#             */
/*   Updated: 2022/10/21 19:22:10 by bgokce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(int nb)
{
	size_t	len;

	len = 0;
	if (nb == -2147483648)
	{
		len += write(1, "-", 1);
		len += write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		len += write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		len += write(1, &"0123456789"[nb], 1);
		return (len);
	}
	else
		len += ft_putnbr(nb / 10);
	len += ft_putnbr(nb % 10);
	return (len);
}
