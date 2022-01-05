/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 08:27:33 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/19 16:34:52 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	z;
	unsigned int	i;

	z = 0;
	i = ft_strlen(src);
	if (size < 1)
		return (i);
	while (src[z] != '\0' && z < size)
	{
		dest[z] = src[z];
		z++;
	}
	dest[z - 1] = '\0';
	return (i);
}
