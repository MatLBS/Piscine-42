/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:24:53 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/01 10:47:58 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (0);
	while (i < (max - min))
	{
		tab[i] = (min + i);
		i++;
	}
	return (tab);
}
/*
   int	main(void)
   {
   int *range;

   range = ft_range(0, 5);
   printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n",
   range[0], range[1], range[2], range[3], range[4]);
   free (range);
   }*/
