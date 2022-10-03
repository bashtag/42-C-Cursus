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

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (((unsigned char *)str1)[i] && ((unsigned char *)str2)[i] && i < n)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	if (i == n)
		i--;
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
