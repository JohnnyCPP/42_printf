/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:01:23 by jonnavar          #+#    #+#             */
/*   Updated: 2024/01/25 16:04:12 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"
#include "libft/libft.h"

void	ft_print_num(va_list args, int *count)
{
	int		value;
	char	*string;
	int		length;

	value = va_arg(args, int);
	string = ft_itoa(value);
	ft_putstr_fd(string, 1);
	length = ft_strlen(string);
	*count += length;
}
