/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgokce <bgokce@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:58:21 by bgokce            #+#    #+#             */
/*   Updated: 2022/10/21 19:21:53 by bgokce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_putnbr(int nb);
size_t	ft_putstr(char *str);
size_t	ft_strlen(const char *str);
int		ft_printf(const char *str, ...);
size_t	ft_putmem(unsigned long long ptr);
size_t	ft_hexputnbr(unsigned long long num, int isUpper);
size_t	ft_uputnbr(unsigned int nb);

#endif