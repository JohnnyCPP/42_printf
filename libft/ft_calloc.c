/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:10:23 by jonnavar          #+#    #+#             */
/*   Updated: 2024/01/13 03:56:21 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t amount, size_t size)
{
	void	*pointer;

	pointer = malloc(amount * size);
	if (pointer == 0)
		return ((void *) 0);
	ft_memset(pointer, '\0', amount * size);
	return (pointer);
}
