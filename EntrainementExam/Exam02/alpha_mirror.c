/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:51:59 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/28 18:21:39 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{

}

int	main(int argc, char **argv)
{
	int	i;
	int	lettre;

	i = 0;
	if (argc != 2)
		return (0);
	while(argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			argv[1][i] = 'Z' - ((argv[1][i]) - 'A');
			write (1, &argv[1][i], 1);
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			(argv[1][i] = 'z' - (argv[1][i] - 'a'));
			write (1, &argv[1][i], 1);
		}
		i++;
	}
	 write (1, "\n", 1);
}
