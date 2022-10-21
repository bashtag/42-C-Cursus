/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgokce <bgokce@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:08:07 by bgokce            #+#    #+#             */
/*   Updated: 2022/10/21 19:14:34 by bgokce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putmem(unsigned long long ptr)
{
	return (write(1, "0x", 2) + ft_hexputnbr(ptr, 0));
}
