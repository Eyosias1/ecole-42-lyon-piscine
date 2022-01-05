/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 12:18:59 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/22 19:11:04 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	allgood( char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	long int	nbr;
	int			i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	if ((allgood(base)) == 1)
	{
		nbr = nb;
		if (nb < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		if (nbr >= i)
		{
			ft_putnbr_base((nbr / i), base);
		}
		ft_putchar(base[nbr % i]);
	}
}
