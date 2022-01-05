/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:23:02 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/26 08:54:45 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb < 2)
		return (0);
	if (nb == 3 || nb == 5)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	if (ft_is_prime(nb))
		return (nb);
	if (nb < 0)
		return (2);
	while (!(ft_is_prime(nb + i)))
		i++;
	res = nb + i;
	return (res);
}
