/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:55:45 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/28 15:23:18 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		i++;
	}
	return (i);
}

int	remp(char *sep, int j, int n, char *joined)
{
	while (sep[j])
	{
		joined[n] = sep[j];
		n++;
		j++;
	}
	return (n);
}

char	*ft_strcatme(char *joined, char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			joined[n] = strs[i][j];
			n++;
			j++;
		}
		if (i < size - 1)
		{
			j = 0;
			n = remp(sep, j, n, joined);
		}
		i++;
	}
	joined[n] = 0;
	return (joined);
}

char	*ft_strjoin(int	size, char **strs, char *sep)
{
	int		i;
	char	*joined;
	int		compteur;

	compteur = 0;
	i = 0;
	if (size == 0)
	{	
		joined = malloc(sizeof(char) * (1));
		*joined = '\0';
		return (joined);
	}
	while (i < size)
	{
		compteur = compteur + ft_strlen(strs[i]);
		i++;
	}
	compteur += ft_strlen(sep) * (size - 1);
	joined = malloc((compteur + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	joined = ft_strcatme(joined, strs, size, sep);
	return (joined);
}
