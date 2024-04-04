/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostrub <rostrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:06:07 by dtrala            #+#    #+#             */
/*   Updated: 2024/03/24 17:01:34 by rostrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	is_valid_colup(int **tab, int *value, int size)
{
	int	x;
	int	y;
	int	in_view;
	int	last;

	x = 0;
	while (x < size)
	{
		y = 0;
		in_view = 0;
		last = 0;
		while (y < size)
		{
			if (tab[y][x] > last)
			{
				in_view++;
				last = tab[y][x];
			}
			y++;
		}
		if (in_view != value[x])
			return (0);
		x++;
	}
	return (1);
}

int	is_valid_coldown(int **tab, int *value, int size)
{
	int	x;
	int	y;
	int	in_view;
	int	last;

	x = 0;
	while (x < size)
	{
		y = size - 1 ;
		in_view = 0;
		last = 0;
		while (y >= 0)
		{
			if (tab[y][x] > last)
			{
				in_view++;
				last = tab[y][x];
			}
			y--;
		}
		if (in_view != value[x])
			return (0);
		x++;
	}
	return (1);
}

int	is_valid_rowleft(int **tab, int *value, int size)
{
	int	x;
	int	y;
	int	in_view;
	int	last;

	y = 0;
	while (y < size)
	{
		x = 0;
		in_view = 0;
		last = 0;
		while (x < size)
		{
			if (tab[y][x] > last)
			{
				in_view++;
				last = tab[y][x];
			}
			x++;
		}
		if (in_view != value[y])
			return (0);
		y++;
	}
	return (1);
}

int	is_valid_rowright(int **tab, int *value, int size)
{
	int	x;
	int	y;
	int	in_view;
	int	last;

	y = 0;
	while (y < size)
	{
		x = size - 1;
		in_view = 0;
		last = 0;
		while (x >= 0)
		{
			if (tab[y][x] > last)
			{
				in_view++;
				last = tab[y][x];
			}
			x--;
		}
		if (in_view != value[y])
			return (0);
		y++;
	}
	return (1);
}

int	check_tab(int **tab, int **value, int size)
{
	if (!check_duplicate_r(tab, size) || !check_duplicate_c(tab, size))
		return (0);
	if (!is_valid_colup(tab, value[0], size))
		return (0);
	if (!is_valid_coldown(tab, value[1], size))
		return (0);
	if (!is_valid_rowleft(tab, value[2], size))
		return (0);
	if (!is_valid_rowright(tab, value[3], size))
		return (0);
	print_table(tab, size);
	return (1);
}
