/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:29:54 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/02 13:44:33 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int     *ft_rrange(int start, int end)
{
	int	*tab;
	int	i;
	int	size;
	
	size = (end - start + 1);
	i = 0;
	tab = malloc(sizeof(int) * (size));
	if (tab == NULL)
		return (0);
	while (end >= start)
	{
		tab[i] = end;
		i++;
		end--;
	}
	return (tab);
}

int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_rrange(1, 3);
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
