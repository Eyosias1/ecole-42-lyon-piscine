/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 15:21:25 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/15 08:06:00 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char str)
{
	if ((str < 48 || str > 57))
		return (0);
	return (1);
}

int	ft_str_is_alpha(char c)
{
	if (!((c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122)))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i])
	{			
		if ((str[i] >= 97 && str[i] <= 122)
			&& ((ft_str_is_alpha(str[i - 1])) == 0
				|| (ft_str_is_numeric(str[i - 1])) == 0))
			str[i] -= 32;
		if ((str[i] >= 65 && str[i] <= 90)
			&& ((ft_str_is_alpha(str[i - 1])) == 1
				|| (ft_str_is_numeric(str[i - 1])) == 1))
			str[i] += 32;
		i++;
	}
	return (str);
}
