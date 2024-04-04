/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostrub <rostrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 10:53:00 by dtrala            #+#    #+#             */
/*   Updated: 2024/03/24 15:50:46 by rostrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	check_input(char *str)
{
	int	i;
	int	counter;

	if (!('0' <= str[0] && str[0] <= '9'))
		return (0);
	i = 0;
	counter = 1;
	while (str[++i])
	{
		if (('0' <= str[i] && str[i] <= '9') && str[i - 1] == ' ')
		{
			counter++;
			continue ;
		}
		if (('0' <= str[i - 1] && str[i - 1] <= '9') && str[i] == ' ')
			continue ;
		return (0);
	}
	if (str[i - 1] == ' ' || counter != 16)
		return (0);
	return (1);
}
