/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/23 22:26:25 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *ptr_find, const void *ptr_str, size_t length)
{
	int				index;
	unsigned char	*aux1;
	unsigned char	*aux2;

	index = 0;
	aux1 = (unsigned char *) ptr_find;
	aux2 = (unsigned char *) ptr_str;
	while (index < (int) length)
	{
		if (aux2[index] != aux1[index])
			return (aux1[index] - aux2[index]);
		index ++;
	}
	return (0);
}
