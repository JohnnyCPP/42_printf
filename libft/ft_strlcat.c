/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/23 14:42:01 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t length)
{
	size_t	destination_length;
	size_t	index;
	size_t	index_j;

	destination_length = ft_strlen(destination);
	index = 0;
	index_j = destination_length;
	if (length == 0 || destination_length >= length)
		return (length + ft_strlen(source));
	while (source[index] && index_j + 1 < length)
	{
		destination[index_j] = source[index];
		index ++;
		index_j ++;
	}
	destination[index_j] = 0;
	return (destination_length + ft_strlen(source));
}
