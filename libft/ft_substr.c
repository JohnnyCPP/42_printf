/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:05:35 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/23 22:28:26 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	void	ft_copy(char *dst, const char *src, int start, size_t length)
{
	int	index;

	index = 0;
	while (src[start + index] != 0 && length > 0)
	{
		dst[index] = src[start + index];
		index ++;
		length --;
	}
	dst[index] = 0;
}

static	char	*ft_allocate(const char *string, int start, size_t length)
{
	size_t		index;

	index = 0;
	while (string[start + index] != 0 && index < length)
		index ++;
	return ((char *) ft_calloc(index + 1, sizeof(char)));
}

char	*ft_substr(const char *string, unsigned int start, size_t length)
{
	char	*pointer;

	if (!string)
		return ((void *) 0);
	if (start >= ft_strlen(string))
	{
		pointer = (char *) ft_calloc(1, sizeof(char));
		return (pointer);
	}
	pointer = ft_allocate(string, start, length);
	if (pointer == 0)
		return ((void *) 0);
	ft_copy(pointer, string, start, length);
	return (pointer);
}
