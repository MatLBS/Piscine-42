/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:16:46 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/03 15:28:28 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int     *ft_range(int start, int end)
{
	int	i;
	char	*tab;
	int	size;

	size = (end - start + 1);
	i = 0;
	tab = malloc(sizeof(int) * (size));
	if (tab == NULL)
		return (0);
	while (i < size)
	{
		tab[i] = (start + i);
		i++;
	}
	return (tab);
}
