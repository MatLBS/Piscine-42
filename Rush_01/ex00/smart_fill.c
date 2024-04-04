/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostrub <rostrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 08:20:00 by rostrub           #+#    #+#             */
/*   Updated: 2024/03/24 19:05:53 by rostrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_smart_fill(t_struct *idk, int size)
{
	ft_smart_fill_up(idk->tab, idk->value[0], size);
	ft_smart_fill_down(idk->tab, idk->value[1], size);
	ft_smart_fill_left(idk->tab, idk->value[2], size);
	ft_smart_fill_right(idk->tab, idk->value[3], size);
}

void	ft_smart_fill_up(int **tab, int *value, int size)
{
	int	i;
	int	i2;

	i = 0;
	while (i < size)
	{
		if (value[i] == size)
		{
			i2 = 0;
			while (i2 < size)
			{
				if (tab[i2][i] == 0)
					tab[i2][i] = i2 + 1;
				i2++;
			}
		}
		if (value[i] == 1)
		{
			if (tab[0][i] == 0)
				tab[0][i] = size;
		}
		i++;
	}
}

void	ft_smart_fill_down(int **tab, int *value, int size)
{
	int	i;
	int	i2;
	int	i3;

	i = 0;
	while (i < size)
	{
		if (value[i] == size)
		{
			i2 = size - 1;
			i3 = 0;
			while (i2 > -1)
			{
				if (tab[i2][i] == 0)
					tab[i2][i] = ++i3;
				i2--;
			}
		}
		if (value[i] == 1)
		{
			if (tab[size - 1][i] == 0)
				tab[size - 1][i] = size;
		}
		i++;
	}
}

void	ft_smart_fill_left(int **tab, int *value, int size)
{
	int	i;
	int	i2;

	i = 0;
	while (i < size)
	{
		if (value[i] == 4)
		{
			i2 = 0;
			while (i2 < size)
			{
				if (tab[i][i2] == 0)
					tab[i][i2] = i2 + 1;
				i2++;
			}
		}
		if (value[i] == 1)
		{
			if (tab[i][0] == 0)
				tab[i][0] = size;
		}
		i++;
	}
}

void	ft_smart_fill_right(int **tab, int *value, int size)
{
	int	i;
	int	i2;
	int	i3;

	i = 0;
	while (i < size)
	{
		if (value[i] == size)
		{
			i2 = size -1;
			i3 = 0;
			while (i2 > -1)
			{
				if (tab[i][i2] == 0)
					tab[i][i2] = ++i3;
				i2--;
			}
		}
		if (value[i] == 1)
		{
			if (tab[i][size - 1] == 0)
				tab[i][size - 1] = size;
		}
		i++;
	}
}
