/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/23 22:26:06 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *ptr_str, int character, size_t length)
{
	int				index;
	unsigned char	*aux_ptr;

	index = 0;
	aux_ptr = (unsigned char *) ptr_str;
	while (index < (int) length)
	{
		if (aux_ptr[index] == (unsigned char)character)
			return ((void *) aux_ptr + index);
		index ++;
	}
	return ((void *) 0);
}
