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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*res;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	i = 0;
	j = ft_strlen(s1) - 1;
	while ((ft_strchr(set, s1[i])) && s1[i])
		i++;
	if (i == ft_strlen(s1) || *s1 == '\0')
		return (ft_strdup(""));
	while ((ft_strchr(set, s1[j])) && j > 0)
		j--;
	res = ft_substr(s1, (unsigned int)i, j - i + 1);
	return (res);
}
