/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:03:03 by tiida             #+#    #+#             */
/*   Updated: 2025/11/02 02:03:10 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex_digits;
	char	first;
	char	second;
	int		i;
	char	c;

	i = 0;
	hex_digits = "0123456789abcdef";
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
		{
			first = hex_digits[c / 16];
			second = hex_digits[c % 16];
			write(1, "\\", 1);
			write(1, &first, 1);
			write(1, &second, 1);
		}
		i++;
	}
}
