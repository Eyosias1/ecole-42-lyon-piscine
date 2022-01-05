/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewoldemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 08:29:56 by ewoldemi          #+#    #+#             */
/*   Updated: 2021/07/27 13:47:27 by ewoldemi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] && s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
int main(int argc, char **argv)
{
	int i;
	int j;
	char *tmp;


	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argv[i] && argv[ i + 1])
		{
			if (ft_strcmp(argv[i], argv[i+1]) <= 0)
			{
				i++;
			}
			else if (ft_strcmp(argv[i], argv[i+1]) > 0)
			{
				tmp = argv[i];
				argv[i] =argv[i+1];
				argv[ i +1 ]= tmp;
				i = 1;
			}
		}
	}
	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}	
	return (0);
}
