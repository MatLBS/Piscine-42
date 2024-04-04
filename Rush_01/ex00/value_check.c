/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostrub <rostrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:06:23 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/24 10:54:09 by rostrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	value_check2(int **value, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < size)
		{
			if (value[i][j] <= 0 || value[i][j] > size)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	value_check(int **value, int size)
{
	int	i;
	int	j;

	if (!value_check2(value, size))
		return (0);
	i = 0;
	j = 0;
	while (i < 3)
	{
		while (j < size)
		{
			if ((value[i][j] + value[i + 1][j]) > size + 1)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	print_table(int **value, int size)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			c = value[i][j] + '0';
			write (1, &c, 1);
			if (j < size - 1)
				write(1, " ", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
