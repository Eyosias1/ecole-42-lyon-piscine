/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 08:38:23 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/24 18:11:40 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (nb == 1)
		return (1);
	if (nb == 2 || nb == 3)
		return (0);
	while ((i * i <= nb) && i < 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}