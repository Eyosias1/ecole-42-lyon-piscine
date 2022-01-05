/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:02:51 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/14 13:45:02 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	c += 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int			b;
	int long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		b = 45;
		write(1, &b, 1);
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10);
}
