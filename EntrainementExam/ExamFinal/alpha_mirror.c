/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:18:34 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/04 12:50:10 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	int	i;
	char	c;

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			c = 'Z' - (argv[1][i] - 'A');
			write (1, &c, 1);
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			c = 'z' - (argv[1][i] - 'a');
			 write (1, &c, 1);
		}
		else
			write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
