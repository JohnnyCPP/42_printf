/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:28:23 by jonnavar          #+#    #+#             */
/*   Updated: 2024/01/25 19:56:51 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>

# if defined (__linux__)
#  define NULL_POINTER "(nil)"
# elif defined (__APPLE__)
#  define NULL_POINTER "0x0"
# endif

// %p, %c, %s
void	ft_print_ptr(va_list args, int *count);
void	ft_print_char(va_list args, int *count);
void	ft_print_str(va_list args, int *count);
void	ft_str_ph(char const ph, va_list args, int *i, int *count);

// %d, %i, %u
void	ft_print_num(va_list args, int *count);
void	ft_print_unum(va_list args, int *count);
void	ft_num_ph(char const ph, va_list args, int *i, int *count);

// %%
void	ft_ph_ph(int *i, int *count);

// %x, %X
void	ft_print_lch(va_list args, int *count);
void	ft_print_uch(va_list args, int *count);
void	ft_base_ph(char const ph, va_list args, int *i, int *count);

// wrong placeholder
void	ft_no_ph(int *i, int *count);

int		ft_printf(char const *format, ...);

#endif
