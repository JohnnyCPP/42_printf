/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:34 by jonnavar          #+#    #+#             */
/*   Updated: 2023/11/23 20:25:53 by jonnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int character)
{
	int		index;

	index = 0;
	while (string[index] != 0)
	{
		if (string[index] == (char)character)
			return ((char *) string + index);
		index ++;
	}
	if (string[index] == (char)character)
		return ((char *) string + index);
	return ((void *) 0);
}
