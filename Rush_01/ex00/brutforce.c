/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brutforce.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostrub <rostrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:02:27 by rostrub           #+#    #+#             */
/*   Updated: 2024/03/24 16:12:02 by rostrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_brut_force2(int i, int i2, t_struct *idk)
{
	int	result;

	result = 0;
	if (i2 + 1 < idk->size)
		result = ft_brut_force(i, i2 + 1, idk);
	else
		result = ft_brut_force(i + 1, 0, idk);
	return (result);
}

int	ft_brut_force3(int value, int i, int i2, t_struct *idk)
{
	int	result;

	result = 0;
	idk->tab[i][i2] = value;
	if (i2 + 1 < idk->size)
		result = ft_brut_force(i, i2 + 1, idk);
	else
		result = ft_brut_force(i + 1, 0, idk);
	return (result);
}

int	ft_brut_force(int i, int i2, t_struct *idk)
{
	int	value;
	int	result;

	result = 0;
	value = 1;
	if (i < idk->size && idk->tab[i][i2] != 0)
		result = ft_brut_force2(i, i2, idk);
	else if (i < idk->size)
	{
		while (value <= idk->size && result != 1)
		{
			result = ft_brut_force3(value, i, i2, idk);
			value++;
		}
		if (result != 1)
			idk->tab[i][i2] = 0;
	}
	else
		result = check_tab(idk->tab, idk->value, idk->size);
	if (result == 1)
		return (1);
	return (0);
}
