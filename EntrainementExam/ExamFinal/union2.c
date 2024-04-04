/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:12:40 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/04 10:25:45 by matle-br         ###   ########.fr       */
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
	int	flag;
	int	j;
	int	k;
	char	tab[100];

	i = 0;
	flag = 0;
	k = 0;
	while (argv[1][i])
	{
		j = 0;
		while (tab[j])
		{
			if (argv[1][i] == tab[j])
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
                        if (argv[2][i] == tab[j])
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
