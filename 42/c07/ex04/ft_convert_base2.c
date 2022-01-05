/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 14:32:43 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/28 09:14:47 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	allgood(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((base[i] == 32) || (base[i] >= 9 && base[i] <= 13))
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

int	checkbase(char *base, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int	negcount;
	int	res;

	negcount = 1;
	res = 0;
	if (allgood(base) == 1)
	{
		while ((*str == 32) || (*str >= 9 && *str <= 13))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				negcount *= -1;
			str++;
		}
		while (*str)
		{
			if (!(checkbase(base, *str) == -1))
				res = res * ft_strlen(base) + checkbase(base, *str++);
			else
				return (res * negcount);
		}
		return (res * negcount);
	}
	return (0);
}
