/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:55:29 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/01 10:48:40 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (-1);
	while (i < (max - min))
	{
		array[i] = (min + i);
		i++;
	}
	*range = array;
	return (i);
}
/*
   int	main(void)
   {
   int *range;

   printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
   printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n",
   range[0], range[1], range[2], range[3], range[4]);

   free (range);
   }*/
