/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:23:50 by tiida             #+#    #+#             */
/*   Updated: 2025/10/30 19:57:13 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*
{
	unsigned int	index;
	unsigned int	src_length;

	if (size > 0)
	{
		src_length = 1;
		while (src[src_length] != '\0')
		{
			src_length++;
		}
		index = 0;
		while (src[index] != '\0' && size - 1 > index)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (src_length);
}
*/

/*
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	return (size);
}
*/
