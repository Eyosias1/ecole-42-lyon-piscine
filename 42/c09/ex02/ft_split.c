/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:35:40 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/29 15:31:46 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	Ischarset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	renvoiNb_mot(char *str, char *charset)
{
	int	i;
	int	mot;
	int	j;

	i = 0;
	mot = 0;
	j = 0;
	while (str[i])
	{
		while (Ischarset(str[i], charset) == 1 && str[i])
			i++;
		if (str[i] != '\0')
			mot++;
		while (Ischarset (str[i], charset) == 0 && str[i])
			i++;
	}
	return (mot);
}

int	nb_carac(char *str, int i, char *charset)
{
	int	j;

	j = 0;
	while (Ischarset(str[i], charset) == 0 && str[i])
	{
		i++;
		j++;
	}
	return (j);
}

char	**remplieRes(char **res, char *str, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (Ischarset(str[i], charset) == 1 && str[i])
			i++;
		j = 0;
		res[k] = malloc(((nb_carac(str, i, charset)) + 1) * sizeof(char));
		if (!res)
			return (0);
		while (Ischarset(str[i], charset) == 0 && str[i])
		{	
			res[k][j] = str[i];
			j++;
			i++;
		}
		res[k][j] = '\0';
		if (str[i])
			k++;
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		j;
	int		i;
	char	**res;
	int		nbr_mot;

	i = 0;
	j = 0;
	nbr_mot = renvoiNb_mot(str, charset);
	res = malloc((nbr_mot + 1) * sizeof(char *));
	if (!res)
		return (0);
	res = remplieRes(res, str, charset);
	res[nbr_mot] = 0;
	return (res);
}
