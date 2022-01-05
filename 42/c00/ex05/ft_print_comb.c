/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:40:44 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/18 09:25:22 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 49;
	while (a < 52)
	{
		b = a + 1;
		while (b < 53)
		{
			c = b + 1;
			while (c < 53)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
int main()
{
	ft_print_comb();
	return (0);
}
