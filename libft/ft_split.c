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

static char	**one_more(char **arr, unsigned int size)
{
	char			**res;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	res = (char **)ft_calloc((size + 2), sizeof(char *));
	if (arr != NULL && res != NULL)
	{
		while (i < size)
		{
			j = 0;
			res[i] = (char *)ft_calloc((ft_strlen(arr[i]) + 1), sizeof(char));
			while (arr[i][j])
			{
				res[i][j] = arr[i][j];
				j++;
			}
			res[i][j] = arr[i][j];
			free(arr[i]);
			i++;
		}
		res[i] = 0;
	}
	free(arr);
	return (res);
}

static int	count(char const *s, char c)
{
	int	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	char			**res;
	unsigned int	size;

	size = 0;
	i = 0;
	res = (char **)ft_calloc(sizeof(char *), 1);
	if (!(res) || !s)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			res = one_more(res, size++);
			res[size - 1] = ft_substr(s, i, count(&s[i], c));
			i += count(&s[i], c);
		}
	}
	return (res);
}
