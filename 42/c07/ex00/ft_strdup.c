/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 09:32:52 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/28 09:13:07 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char	*src)
{
	int		len;
	int		i;
	char	*strcpy;

	len = ft_strlen(src);
	i = 0;
	strcpy = malloc((len + 1) * sizeof(char));
	if (strcpy == NULL)
		return (NULL);
	while (src[i])
	{
		strcpy[i] = src[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}
