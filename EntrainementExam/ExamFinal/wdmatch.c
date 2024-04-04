/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 21:03:47 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/03 13:46:07 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[2][i])
	{
		if (argv[1][j] == argv[2][i])
		{
			j++;
		}
		i++;
	}
	if (argv[1][j] == '\0')
		ft_putstr(argv[1]);
	write (1, "\n", 1);
	return (0);
}
