/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 17:48:53 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/29 11:34:50 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
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
		return (0);
	while (src[i])
	{
		strcpy[i] = src[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stab;

	i = 0;
	stab = malloc((ac + 1) * (sizeof(t_stock_str)));
	if (!(stab))
		return (0);
	while (i < ac)
	{
		stab[i].size = ft_strlen(av[i]);
		stab[i].str = av[i];
		stab[i].copy = ft_strdup(av[i]);
		i++;
	}
	stab[i].size = 0;
	stab[i].str = 0;
	stab[i].copy = 0;
	return (stab);
}
