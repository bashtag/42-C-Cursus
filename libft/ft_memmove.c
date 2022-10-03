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

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dest == src)
		return (dest);
	else if (dest > src)
	{
		while (len > 0)
		{
			*((char *)(dest) + len - 1) = *((char *)(src) + len - 1);
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			*((char *)(dest) + i) = *((char *)(src) + i);
			i++;
		}
	}
	return (dest);
}
