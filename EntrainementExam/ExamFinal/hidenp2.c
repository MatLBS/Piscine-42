/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:39:30 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/04 10:47:52 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		if (argv[2][i] == argv[1][j])
		{
			j++;
		}
		i++;
	}
	if (argv[1][j] == '\0')
		write (1, "1", 1);
	else
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}
