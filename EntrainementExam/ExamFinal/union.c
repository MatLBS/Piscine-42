/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:52:07 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/04 10:24:54 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	int	i;
	int	flag;
	char	tab[100];
	int	j;
	int	k;

	i = 0;
	k = 0;
	flag = 0;
	while (argv[1][i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j] == argv[1][i])
				flag = 1;
			j++;
		}
		if (flag == 0)
		{
			write (1, &argv[1][i], 1);
			tab[k] = argv[1][i];
			k++;
		}
		flag = 0;
		i++;
	}
	i = 0;
	flag = 0;
	while (argv[2][i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j] == argv[2][i])
				flag = 1;
			j++;
		}
		if (flag == 0)
		{
			write (1, &argv[2][i], 1);
			tab[k] = argv[2][i];
			k++;
		}
		flag = 0;
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
