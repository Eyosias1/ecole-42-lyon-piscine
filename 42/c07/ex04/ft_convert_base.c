/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:12:29 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/28 15:22:39 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

int	allgood1(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((base[i] == 32 ) || (base[i] >= 9 && base[i] <= 13))
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

void	ft_putnbr_base(int nb, char *base, char *mal, int k)
{
	long int	nbr;

	if ((allgood1(base)) == 1)
	{
		nbr = nb;
		if (nb < 0)
			nbr *= -1;
		k--;
		while (k >= 0 && mal[k] != '-')
		{
			mal[k] = base[nbr % ft_strlen(base)];
			nbr /= ft_strlen(base);
			k--;
		}
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*mal;
	int		nbrInt;
	int		sauvint;
	int		i;

	if (allgood1(base_from) * allgood1(base_to) == 0)
		return (0);
	i = 0;
	nbrInt = ft_atoi_base(nbr, base_from);
	sauvint = nbrInt;
	while (sauvint != 0)
	{
		sauvint = sauvint / ft_strlen(base_to);
		i++;
	}
	if (i == 0 || nbrInt < 0)
		i++;
	mal = malloc((i + 1) * sizeof(char));
	if (nbrInt < 0)
		mal[0] = '-';
	ft_putnbr_base(nbrInt, base_to, mal, i);
	mal[i] = '\0';
	return (mal);
}
