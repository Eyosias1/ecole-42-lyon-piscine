/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:23:31 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/28 09:13:16 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*tabrange;

	i = min;
	j = 0;
	while ((i < max))
	{
		j++;
		i++;
	}
	tabrange = malloc((j) * sizeof(int));
	if (tabrange == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tabrange[i] = min;
		i++;
		min++;
	}
	return (tabrange);
}
