/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostrub <rostrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:24:38 by dtrala            #+#    #+#             */
/*   Updated: 2024/03/23 23:03:33 by rostrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	check_duplicate_r(int	**tab, int size)
{
	int	p1;
	int	p2;
	int	n_row;

	n_row = 0;
	while (n_row < size)
	{
		p1 = 0;
		while (p1 < size)
		{
			p2 = 0;
			while (p2 < size)
			{
				if (tab[n_row][p1] == tab[n_row][p2] && p1 != p2)
					return (0);
				p2++;
			}
			p1++;
		}
		n_row++;
	}
	return (1);
}

int	check_duplicate_c(int	**tab, int size)
{
	int	p1;
	int	p2;
	int	n_col;

	n_col = 0;
	while (n_col < size)
	{
		p1 = 0;
		while (p1 < size)
		{
			p2 = 0;
			while (p2 < size)
			{
				if (tab[p1][n_col] == tab[p2][n_col] && p1 != p2)
					return (0);
				p2++;
			}
			p1++;
		}
		n_col++;
	}
	return (1);
}
