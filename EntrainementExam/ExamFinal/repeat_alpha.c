/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:58:13 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/04 12:08:15 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_letter(char c)
{
	int	nb;

	nb = 0;
	if (c >= 'A' && c <= 'Z')
		nb = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
                nb = c - 'a' + 1;
	else
		nb = 1;
	return (nb);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	int	i;
	int	nb_letter;
	int	j;

	i = 0;
	nb_letter = 0;
	while (argv[1][i])
	{
		nb_letter = count_letter(argv[1][i]);
		j = 0;
		while (j < nb_letter)
		{
			ft_putchar(argv[1][i]);
			j++;
		}
		i++;
		nb_letter = 0;
	}
	write (1, "\n", 1);
	return (0);
}
