/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:05:35 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/23 22:38:34 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	void	*ft_free_all(char	**strings)
{
	int	index;

	index = 0;
	while (strings[index])
		free(strings[index ++]);
	free(strings);
	return ((void *) 0);
}

static	int	ft_subs_len(const char *string, const char character)
{
	int	index;

	index = 0;
	while (string[index] && string[index] != character)
		index ++;
	return (index);
}

static	int	ft_len(const char *string, const char c)
{
	int	index;
	int	length;

	index = 0;
	length = 0;
	while (string[index] && string[index] == c)
		index ++;
	if (string[index])
		length ++;
	while (string[index])
	{
		if (string[index] == c && string[index + 1] != c && string[index + 1])
			length ++;
		index ++;
	}
	return (length);
}

static	char	**ft_get_strs(const char *str, const char c, int w, char **r)
{
	int	start;
	int	index;
	int	l_substr;

	start = 0;
	index = 0;
	while (w --)
	{
		while (str[start] == c && str[start])
			start ++;
		l_substr = ft_subs_len(str + start, c);
		r[index] = ft_substr(str, start, l_substr);
		if (!r[index ++])
			return (ft_free_all(r));
		start += l_substr;
		if (str[start] && str[start] != c)
			start ++;
	}
	r[index] = 0;
	return (r);
}

char	**ft_split(const char *str, const char c)
{
	int		words;
	char	**result;

	words = ft_len(str, c);
	result = (char **) ft_calloc(words + 1, sizeof(char *));
	if (!result)
		return ((void *) 0);
	return (ft_get_strs(str, c, words, result));
}
