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

void	lop(int i, int j, char *res, const char *s2)
{
	while (s2[j])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		total;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *)malloc(total * sizeof(char));
	if (!res)
		return (res);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	lop(i, j, res, s2);
	return (res);
}
