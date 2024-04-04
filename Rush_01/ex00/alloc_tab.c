/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostrub <rostrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:15:29 by rostrub           #+#    #+#             */
/*   Updated: 2024/03/24 10:18:49 by rostrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	**ft_alloc_tab(int size, int size2)
{
	int	i;
	int	**tab;

	i = 0;
	tab = malloc(sizeof(int *) * size2);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = malloc(sizeof(int) * size);
		if (!tab[i])
		{
			ft_free_tab(tab, i);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

void	ft_free_tab(int **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	ft_free_strr(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	ft_init_tab(int **tab, int size)
{
	int	i;
	int	i2;

	i = 0;
	while (i < size)
	{
		i2 = 0;
		while (i2 < size)
		{
			tab[i][i2] = 0;
			i2++;
		}
		i++;
	}
}

void	ft_init_value(int **value, char **av, int size)
{
	int	i;
	int	i2;
	int	i3;

	i3 = 0;
	i = 0;
	while (i < 4)
	{
		i2 = 0;
		while (i2 < size && av[i3])
		{
			value[i][i2] = ft_atoi(av[i3]);
			i2++;
			i3++;
		}
		i++;
	}
}
