/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgokce <bgokce@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:11:43 by bgokce            #+#    #+#             */
/*   Updated: 2022/10/21 19:21:23 by bgokce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_uputnbr(unsigned int nb)
{
	size_t	len;

	len = 0;
	if (nb < 10)
	{
		len += write(1, &"0123456789"[nb], 1);
		return (len);
	}
	else
		len += ft_uputnbr(nb / 10);
	len += ft_uputnbr(nb % 10);
	return (len);
}
