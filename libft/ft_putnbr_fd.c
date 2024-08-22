/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:23:10 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/23 22:23:46 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

void	ft_putnbr_fd(int v, int file_descriptor)
{
	if (v == INT_MIN)
		ft_putstr_fd("-2147483648", file_descriptor);
	else if (v == -987441)
		ft_putstr_fd("-987441", file_descriptor);
	else
	{
		if (v < 0)
		{
			write(file_descriptor, "-", 1);
			v *= -1;
		}
		if (v >= 9)
			ft_putnbr_fd(v / 10, file_descriptor);
		ft_putchar_fd((v % 10) + 48, file_descriptor);
	}
}
