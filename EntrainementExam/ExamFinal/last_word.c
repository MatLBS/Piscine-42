/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:01:50 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/01 21:02:05 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	last_word(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		while (str[i] == 32 || str[i] == '\t')
			i--;
		j = i + 1;
		while (str[i] != ' ' && str[i] != '\t')
		{
			i--;
		}
		i++;
		while (i < j)
		{
			write (1, &str[i], 1);
			i++;
		}
		break;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}

	last_word(argv[1]);
	write (1, "\n", 1);
}
