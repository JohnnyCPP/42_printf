/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:10:23 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/23 22:24:59 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	void	ft_add_value(const char *value, int *i, int *buffer)
{
	int	digit;

	digit = value[*i] - 48;
	*buffer *= 10;
	*buffer += digit;
	(*i)++;
}

static	int	ft_isspace(char character)
{
	if (character == 32 || (9 <= character && character <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *value)
{
	int	index;
	int	buffer;
	int	sign;

	index = 0;
	buffer = 0;
	sign = 1;
	while (ft_isspace(value[index]))
		index ++;
	if (value[index] == '+' || value[index] == '-')
	{
		if (value[index] == '-')
			sign = -1;
		index++;
	}
	while (ft_isdigit(value[index]))
		ft_add_value(value, &index, &buffer);
	buffer = sign * buffer;
	return (buffer);
}
