/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:00:21 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/19 11:38:29 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkifallcor(char *src, char *tofind)
{
	int	i;

	i = 0;
	while (tofind[i])
	{
		if (src[i] == tofind[i])
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

char	*ft_strstr(char *src, char *tofind)
{
	if (*tofind == '\0')
		return (src);
	while (*src)
	{
		if (*src == *tofind)
		{
			if ((checkifallcor(src, tofind) == 1))
			{
				return (src);
			}
		}
		src++;
	}
	return (0);
}
