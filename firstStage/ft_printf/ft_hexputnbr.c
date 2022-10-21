/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgokce <bgokce@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:02:23 by bgokce            #+#    #+#             */
/*   Updated: 2022/10/21 19:22:26 by bgokce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_hexputnbr(unsigned long long num, int isUpper)
{
	size_t	len;

	len = 0;
	if (num < 16)
	{
		if (isUpper)
			len += write(1, &"0123456789ABCDEF"[num], 1);
		else
			len += write(1, &"0123456789abcdef"[num], 1);
		return (len);
	}
	else
		len += ft_hexputnbr(num / 16, isUpper);
	len += ft_hexputnbr(num % 16, isUpper);
	return (len);
}
