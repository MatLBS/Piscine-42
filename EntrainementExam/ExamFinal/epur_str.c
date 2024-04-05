/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:49:15 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/03 19:30:02 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str, int size, int j)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write (1, &str[j], 1);
		i++;
		j++;
	}
}

int	count_words(char *str)
{
	int	i;
	int	flag;
	int	words;

	i = 0;
	flag = 0;
	words = 0;
	while(str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && flag == 0 && str[i] != '\0')
		{
			words++;
			flag = 1;
		}
		if (str[i] == ' '|| str[i] == '\t' && str[i] != '\0')
			flag = 0;
		i++;
	}
	return (words);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	int	i;
	int	j;
	int	number_words;
	int	count;

	i = 0;
	count = 0;
	number_words = count_words(argv[1]);
	while (count < number_words)
	{
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
			i++;
		j = i;
		while ((argv[1][i] != ' ' && argv[1][i] != '\t') && argv[1][i] != '\0')
			i++;
		ft_putstr(argv[1], (i - j), j);
		if (count < number_words - 1)
			write (1, " ", 1);
		count++;
	}
	write (1, "\n", 1);
	return (0);
}
