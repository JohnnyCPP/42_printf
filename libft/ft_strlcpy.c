/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/10/29 16:13:45 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t length)
{
	size_t	index;

	if (length == 0)
		return (ft_strlen(source));
	index = 0;
	while (source[index] && index < (length - 1))
	{
		destination[index] = source[index];
		index ++;
	}
	destination[index] = '\0';
	return (ft_strlen(source));
}
