/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgokce <bgokce@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:33:20 by bgokce            #+#    #+#             */
/*   Updated: 2022/10/03 14:37:13 by bgokce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;
	size_t	value;

	i = 0;
	size = 0;
	while (dst[size])
		size++;
	if (dstsize > (size_t)ft_strlen(dst))
		value = (size_t)ft_strlen(dst) + (size_t)ft_strlen(src);
	else
		return (dstsize + ft_strlen(src));
	while (src[i] && size < dstsize - 1)
	{
		dst[size] = src[i];
		size++;
		i++;
	}
	if (dstsize)
		dst[size] = 0;
	return (value);
}
