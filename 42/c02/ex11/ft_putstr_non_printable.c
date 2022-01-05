/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printatble.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 08:27:19 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/19 16:37:10 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char c)
{
	if ((c < 32 || c > 126))
	{
		return (0);
	}
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	d;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		d = str[i];
		if (!(ft_str_is_printable(d)))
		{
			write(1, "\\", 1);
			ft_putchar(hex[d / 16]);
			ft_putchar(hex[d % 16]);
		}
		else
		{
			ft_putchar(d);
		}
		i++;
	}
}
