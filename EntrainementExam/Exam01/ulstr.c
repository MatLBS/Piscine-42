/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:07:34 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/22 10:24:19 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>


char	*minuscule_or_majuscule(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}



int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		write (1, "\n", 1);
	minuscule_or_majuscule(argv[1]);
	while (argv[1][i] != '\0')
	{
		write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
