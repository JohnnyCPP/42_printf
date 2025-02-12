/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:10:23 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/23 22:27:23 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_fndstr(const char *str1, const char *substr, size_t l, size_t i)
{
	size_t	j;

	j = 0;
	while (i < l)
	{
		if (str1[i] != substr[j])
			break ;
		if (substr[j + 1] == 0)
			return (1);
		i ++;
		j ++;
	}
	return (0);
}

char	*ft_strnstr(const char *string, const char *to_find, size_t length)
{
	size_t			index;
	unsigned char	*ptr_found;

	ptr_found = (unsigned char *) string;
	if (to_find[0] == 0)
		return ((char *) ptr_found);
	index = 0;
	while (index < length && string[index] != 0)
	{
		if (string[index] == to_find[0])
			if (ft_fndstr(string, to_find, length, index))
				return ((char *) ptr_found + index);
		index ++;
	}
	return ((void *) 0);
}
