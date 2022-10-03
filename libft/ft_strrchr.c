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

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	res;

	res = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] == c % 256)
			res = i;
		i++;
	}
	if (str[i] == c % 256)
		res = i;
	if (res == -1)
		return (NULL);
	else
		return (&((char *)str)[res]);
}
