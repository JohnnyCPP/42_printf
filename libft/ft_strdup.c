/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:10:23 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/23 22:26:56 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*pointer;
	int		length;

	length = ft_strlen(string) + 1;
	pointer = (char *) malloc(length * sizeof(char));
	if (!pointer)
		return (0);
	ft_strlcpy(pointer, string, length);
	return (pointer);
}
